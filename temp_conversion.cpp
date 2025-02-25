#include <iostream>

int main()
{
    char scale;
    float value,temp;

    std::cout<<"Enter 'c' for celcius scale 'f' for farhenhiet scale: ";
    std::cin>>scale;

    std::cout<<"Enter value of temprature in "<< (scale == 'c'?"celcius":"farhenhiet")<<" scale: ";
    std::cin>>value;

    if (scale == 'c')
    {
        temp = (9*value/5)+32;
        std::cout<<"thmprature in farhenhiet scale is: "<<temp;
    }
    else if (scale == 'f')
    {
        temp = (value-32)*(5/9);
        std::cout<<"thmprature in farhenhiet scale is: "<<temp;
    }
    return 0;
}