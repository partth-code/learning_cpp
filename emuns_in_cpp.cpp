#include <iostream>

//enums are like a way to assign integer value to a string
//if you dont explecitely assing a numerical value it will be implicitely assingned starting form zero
//theya are useful as switch only accept integer cases so by using e num we can use strings in it as well
//itis like creating new data type with where a word is linked to some numerical value
//we can use switches with enums

enum Day
{
    sunday= 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thrusday = 5,
    friday = 6,
    saturday = 7

};
int main()
{
    Day today = sunday; //now the input of an enum variable can only be one of  the value that is used inside the enum
    switch(today)
    {
        case sunday:
            break;
        default:
            break;


    }
    return 0;
}