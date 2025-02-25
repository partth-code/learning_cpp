#include <iostream>

int main()
{
    int multiples , current,number;
    
    current =1;

    std::cout<<"Enter number & number of multiples you want to see: ";
    std::cin>>number>>multiples;

    while (current <= multiples)
    {
        std::cout<<number<<"x"<<current<<" = "<<number*current<<'\n';
        ++current;
    }
    return 0;
}