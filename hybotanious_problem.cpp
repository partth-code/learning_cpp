#include <iostream>
#include <cmath>


int main()
{
    float base,perpendicular,hypotanious;
    
    //base input
    std::cout<<"Enter the length of base for the right triangle: ";
    std::cin>>base;

    //perpendicular
    std::cout<<'\n'<<"Enter the length of perpendicular for the right triangle: ";
    std::cin>>perpendicular;

    hypotanious  = sqrt(pow(base,2)+pow(perpendicular,2));

    std::cout<<'\n'<<"Enter value for the hypotanious length is: "<<hypotanious;
    
    return 0;
}