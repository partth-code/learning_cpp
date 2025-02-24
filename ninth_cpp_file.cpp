#include<iostream>
#include<cmath>


int main()
{
    //some useful math related functions
    double a = 3;
    double b = 4;
    double z;
    z = std::max(a,b); // to get max of two numbers
    z = std::min(a,b); // to get min of two numbers
    z = pow(a,b);   // a to the power of b
    z = sqrt(a); //square root of a
    z = abs(-3); //modlus function
    z = round(3.14); // return rounded value (not the floor or ceiling)
    z = ceil(3.14); //return ceiling value 4 here
    z = floor(3.14); //return the floor value 3 here

  //Note -: there are many more functions in cmath


    return 0;
}