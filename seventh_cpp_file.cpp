#include <iostream>

int main()
{
    /*
     there are two types of type conversions possible

     inplesit and explesit

     implesit happen by their own while in explecit we need to specify

    explesit conversion can be very usefu in integer division
    */

    int number_of_apples = 10;
    int number_of_people = 11;

    float apple_per_person = number_of_apples/number_of_people;

    // here the result is not what which is expected and the reason for thsi is when integer is divvided by integer it gives an integer so we have t o type cast that integer to float in order to obtain a decimal value;

    float apple_per_eater = number_of_apples/(float)number_of_people ;

    std::cout<<apple_per_person<<'\n'<<apple_per_eater;

    return 0;
}