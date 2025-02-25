#include<iostream>

int main()
{
    int age;
    
    std::cout<<"Enter your age: ";
    std::cin>>age;

    //as in every other language order of conditional statements matters it would have been a different result if i have placed condition1 before 2
    if (age>=100)
    {
        std::cout<<"Eat 5 star and do nothing";
    }
    else if (age>= 18 && age<= 65)
    {
        std::cout<<"Go to work,and have a life!";
    }
    else
    {
        std::cout<<"enjoy the life";
    }

    return 0;
}