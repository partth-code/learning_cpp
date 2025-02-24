#include<iostream>

int main()
{
    /*
     variables: they are the containers which are small chunks of the memory and each variable cossisponds to a specific memory loocation

     the dype of data stored in the variable depends on the data type of the variable
    */

    //we can create variables in two ways

    //way 1 ->
    //declaration
    int a;
    //assignment
    a = 4; 

    //way 2 ->
    //declaration with assignment

    int b = 4;

    /*
    there are several basic datatypes -:

    int :: fo integer value
    double , float :: for real numbers or numbers with decimals
    char :: for characters
    string :: to store sequence of text ,like sentences ,words,paragraphs
    bool :: to store true or false

    not string is avilable in std namespace
    */

    int a = -1;
    float b = 45.6;
    double c = 65.4;
    char d = '\n';
    std::string  e = "science is all about exploration";
    bool f = true;

    std::cout <<a<<b<<c<<d<<e<<f<<std::endl;


    return 0;
}