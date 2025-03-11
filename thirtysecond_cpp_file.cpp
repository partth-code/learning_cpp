#include<iostream>

int main()
{
    std::string fruits[] = {"apple","mango","banana","pineapple"};

    //or we can decleare an array wit hsize specified ,then use assign it later
    
    std::string cars[3];

    cars[1] = "rolls royals";

    std::string fruit[3];

    fruit[1] = "apple";

    std::cout<<fruit[1];

    return 0;
}