#include <iostream>

int main()
{
    //ueful string methods

    std::string sample = "this is a sample string and does not contain any thing important";
    
    //sample.length();  // this is useful to get length of the string

    //sample.empty(); // to check if the string is empty or has somthing

    //sample.clear(); // used to clear the string

    //sample.append("magic"); // it appends given string at the end of the parent sttring like cool to coolmagic 

    //sample.at(2); //it takes index as a parameter and return what is  stored at that index

    sample.insert(0,"4"); // takes two elements an index,a string to be inserted at thatindex

    sample.find("m"); //this gives the position of the first occourance of that character

    sample.erase(2,4); //takes two parameters starting index and ending index and erases that much of string
    return 0;
}