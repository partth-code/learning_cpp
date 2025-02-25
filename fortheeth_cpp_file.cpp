#include <iostream>

int main()
{
    //ternary operators are best way to use if else statements like they are if lese in one line
   
    float grade = 60;
    bool hungry = true;


    grade >= 70 ? std::cout<<"good job" : (grade<=70 && grade >= 50)? std::cout<<"good" : std::cout<<"better luck next time";


    std::cout<<'\n'<<(hungry? "you are hungry" : "nah,not hungry");

    return 0;
}