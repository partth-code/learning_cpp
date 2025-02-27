#include<iostream>

void pizza_func(std::string ordered_pizza);
float area(float len);
float vol(float len);

int main()
{
    std::string pizza  ="margreta";
    pizza_func(pizza);

    float b = area(23);
    return 0;
}

void pizza_func(std::string ordered_pizza)
{
    std::cout<<"The pizza you ordered is: "<<ordered_pizza<<'\n'<<'\n';
}

float area(float len)
{
    return len*len;
}
float vol(float len)
{
    return len*len*len;
}
