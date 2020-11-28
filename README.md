# Description
The program takes the specific input from the user which is namely defined as password. The password should be checked for correctness: <br/>

contain at least 8 characters, but no longer than 20 characters
contain at least one small and a big letter
contains a letter contains a special symbol, one of the (* . ,) <br/>

If the password passed, it will take content from the file "NASA TOP SECRET" and write it to "saveToFile.txt". <br/>
I have used a Unit Test, Gtest from Google. It checks whether the functions which verify the password are correct

### Gtest
To use the Unit Test, Gtest, you should download the framework. To get more information on Gtest, read the following articles:<br/>
https://github.com/google/googletest  <br/>
https://www.srcmake.com/home/google-cpp-test-framework  <br/>

### Useful commands
In order to clean after folder after using compilator, cmake and make, use the following command: <br/>
cmake CMakeLists.txt <br/>
make<br/>

