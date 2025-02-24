#include<iostream>

int main()
{

    std::string name;
    int age;

    std::cin>>age;

    //to get input with space we will use
    std::cout<<"Enter your full name: ";
    std::getline(std::cin>>std::ws,name);

    std::cout<<'\n'<<"Enter your age: ";
    

    std::cout<<'\n'<<"Hi "<<name<<" your age is "<<age;

    //note if we use getline() after cin it by default accepts a newline char and to avoid this we can use std::ws this will clear any newline char or white space after cin
    return 0;
}