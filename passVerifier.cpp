// 1stProject.cpp

//readingText.c
/*
EOF reurns -1 if fails and 0 if successful

int mchar = fgetc(fp);
fgetc returns an int to check if it end-of-file EOF

fgetc() will read a single character from a file.
it takes a pointer to a FILE .it returns int
it return int because if it 0, then good else bad.  
       
- Library
- GList
- Collection (the list )

*/
#include <iostream>
#include <stdio.h>
// #include "Aspose.PDF-for-C-master/Examples/PdfCPP/Aspose.Pdf.h"

//Standard Library headers
#include <cstring> 
#include <string>
#include "psscheck.h"

using namespace std;

void introduction();

//FUNCTION DECLARATION TO CHECK THE PASSWORD

int main()
{
    //creating an object


    FILE *fp = NULL; //FILE is a track file pointer; says
            //where i am located in the file
    int c,  checkFseek;
    fpos_t here;
    string pass;
    
    introduction();

    repeatPass:
    cin >> pass;
    int length = pass.length();

    //CHECKING PASSWORD CORRECTNESS
    while(passUpperLower(pass)){
            cin >> pass;
            length = pass.length();
    }

    if (special_character(pass, length)){
        puts("no special char in calling");
        goto repeatPass;
    }
    else if (atLeastLetter(pass)) {
        puts("no letters in the password!");
        goto repeatPass;
    }


    //opening file with the relative path
    fp = fopen("NASA TOP SECRET CONVERSATION", "r");

    if(fp == NULL){
        printf("Error opening\n");
        return -1;
    }
        //moving to the begging
    checkFseek=fseek(fp, 0, SEEK_SET);//returns 0 if it was ok
    
    //checking if it was successful
        if(checkFseek){
            puts("failed to fseek()");
        }

    // CREATING A DIFFERENT FILE
    FILE *fnewText = NULL;

    fnewText = fopen("saveToFile.txt", "w+");
    checkFseek=fseek(fnewText, 0, SEEK_SET);//returns 0 if it was ok
    //checking if it was successful
        if(checkFseek){
            puts("failed to fseek()");
        }

        while ((c = fgetc(fp)) != EOF)//imagine like this c != EOF.
        {
            fputc(c, fnewText);
        }

        //moving to the begging
    checkFseek=fseek(fnewText, 0, SEEK_SET);//returns 0 if it was ok
    
    //checking if it was successful
        if(checkFseek){
            puts("failed to fseek()");
        }
/* 

    check=fgetpos(fnewText, &here);
    //checking if it was successful
        if (check)
        {
            puts("failed to fgetpos");
        }
        
        printf("you are at %d byte\n", here);
 */
    //read a single char 
    //EOF accepts -1 if it finds an end of the line and stops running
    //. i can save -1 in signed int or in char 
    while ((c = fgetc(fnewText)) != EOF)//imagine like this c != EOF.
        printf("%c", c);
//In C/C++, getc() returns EOF when end of file is reached. getc() also returns EOF when it fails.
    int check;
    check = fgetpos(fnewText, &here);
    //checking if it was successful
        /* if (check)
        {
            puts("failed to fgetpos");
        }
        
        printf("you are at %d byte\n", here);
 */
    fclose(fp);
    fp = NULL;


    fclose(fnewText);
    fnewText = NULL;


    return 0;
}

// FUNCTION DEFENITIONS:

void introduction(){
    cout << "Enter the password that:\n";

        cout << "- contain at least 8 characters, but no longer than 20 characters"<< endl;
        cout << "- contain at least one small and big letter"<< endl;
        cout << "- contains a letter"<< endl;
        cout << "- contain a special symbol, one of the (* . ,)"<< endl;
        cout << "NOW, ENTER A PASSWORD:"<< endl;

}
