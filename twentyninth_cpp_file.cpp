#include<iostream>

void pizza();
void pizza(std::string topping1);
//we can create global variables by
int a = 23;
//they are not very secure and pollute the global namespace
//we can use a global varible in locla area wit hsame variable by ::a
int main()
{
    pizza();
    pizza("pizza");
    return 0;
}

//note function name + parameters used gives the signature of a function i.e even of one of them changed function will change
void pizza()
{
    std::cout<<"This pizza is plain";
}
void pizza(std::string topping1)
{
    std::cout<<"This pizza has "<<topping1<<" as toppings";
}