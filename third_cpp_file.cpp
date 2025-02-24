#include <iostream>

int main()
{
    //we can create constants with "const" key word before declearing a data type of the variable , as a convention we use uppercamelcase for their naming

    //calculating area of the circle

    const float PI = 3.14;
    float radius = 23;

    float area = PI*radius*radius;

    std::cout<<"Area of the circle is: "<<area<<std::endl;
    

    return 0;
}