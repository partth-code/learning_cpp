#include <iostream>

int main()
{
    //useful when we want to repeat the block only when it one time dosent quite  got right
    int number;
    do{
        std::cout<<"Enter a number: ";
        std::cin>>number;
    }while(number<=0);

    return 0;
}