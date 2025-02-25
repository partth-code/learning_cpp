#include <iostream>

int main()
{
    double num1,num2;
    char opr;

    std::cout<<"Enter value for first number: ";
    std::cin>>num1;

    std::cout<<"Enter an operator from (+,-,x,/): ";
    std::cin>>opr;

    std::cout<<"Enter value for second number: ";
    std::cin>>num2;
     // switches are useful when we have to deal with patterns i.e multiple output cases for a variable
    switch(opr)
    {
        case '+':
            std::cout<<num1<<"+"<<num2<<" = "<<num1+num2;
            break;
        case '-':
            std::cout<<num1<<"-"<<num2<<" = "<<num1-num2;
            break;
        case 'x':
            std::cout<<num1<<"x"<<num2<<" = "<<num1*num2;
            break;
        case '/':
            std::cout<<num1<<"/"<<num2<<" = "<<num1/num2;
            break;
    }
    return 0;
}