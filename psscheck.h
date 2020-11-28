#include <iostream>

using namespace std;

int passUpperLower(string pass);
int special_character(string str, int n);
int atLeastLetter(string str);


int passUpperLower(string pass)
{
    if (pass.length() < 8 || pass.length() > 20)
    {

        puts("Wrong password. The length is less 8 or bigger 20!");
        return 1;
    }

//DOESNT WORK FOR QFQWFDwq@!
//nor A@eweweffwefewf

    //checking upper and lower cases
    // int length = pass.length();
    int breakFlag = 0;
    for (long unsigned int i = 0; i < pass.length(); i++)
    {
        if(breakFlag ==1){
            break;
        }
        
        if(islower(pass[i])){
            for (long unsigned int n = 1; n < pass.length(); n++) {
                if(isupper(pass[n])){
                    breakFlag++;
                    break;
                }
                //to understand that in last iteration there's no big letter
                else if(n == pass.length()-1){
                    puts("Wrong password. It must contain at least one big letter!");
                    return 1;
                    }
            }
            
        }

        if(isupper(pass[i])){
            for (long unsigned int n = 1; n < pass.length(); n++) {
                if(islower(pass[n])){
                    breakFlag++;
                    break;
                }
                //to understand that in last iteration there's no small letter
                else if (n == pass.length() - 1)
                {
                    puts("Wrong password. It must contain at least one small letter!");
                    return 1;
                }
            }
        }

        }
return 0;
}

int special_character(string str, int n){
        for (int i = 0; i < n; i++){
        //checking each character of the string for special character.
            if(str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$'
            || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*'
            || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '{'
            || str[i] == '}' || str[i] == '[' || str[i] == ']' || str[i] == ':'
            || str[i] == ';' || str[i] == '"' || str[i] == '\'' || str[i] == '<'
            || str[i] == '>' || str[i] == '.' || str[i] == '/' || str[i] == '?'
            || str[i] == '~' || str[i] == '`' )
            {
                return 0;
            }

            else if (n == (int)(str.length()) - 1){
                return 1;
            }
        }   
}

int atLeastLetter(string str){
    for (long unsigned int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'q' || str[i] == 'w' || str[i] == 'e' || str[i] == 'r'
            || str[i] == 't' || str[i] == 'y' || str[i] == 'u' || str[i] == 'i'
            || str[i] == 'o' || str[i] == 'p' || str[i] == 'a' || str[i] == 's'
            || str[i] == 'd' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h'
            || str[i] == 'j' || str[i] == 'k' || str[i] == 'l' || str[i] == 'z'
            || str[i] == 'c' || str[i] == 'v' || str[i] == 'n' || str[i] == 'm'
            || str[i] == 'x' || str[i] == 'b' 
            || str[i] == 'Q' || str[i] == 'F' || str[i] == 'G' || str[i] == 'X'
            || str[i] == 'W' || str[i] == 'D' || str[i] == 'H' || str[i] == 'C'
            || str[i] == 'E' || str[i] == 'S' || str[i] == 'J' || str[i] == 'V'
            || str[i] == 'R' || str[i] == 'A' || str[i] == 'K' || str[i] == 'B'
            || str[i] == 'T' || str[i] == 'P' || str[i] == 'L' || str[i] == 'N'
            || str[i] == 'Y' || str[i] == 'O' || str[i] == 'Z' || str[i] == 'M'
            || str[i] == 'U' || str[i] == 'I' )
            {
                return 0;
            }

        else if (i == str.length() - 1){
            return 1;
        }
    }
}   

