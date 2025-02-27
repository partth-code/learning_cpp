#include<iostream>
#include<ctime>
#include<cstdlib>

int main()
{
    //initializing random
    srand(time(NULL));

    int event = rand()%5+1;

    switch (event)
    {
        case 1:
            std::cout<<"A crate appeared";
            break;
        case 2:
            std::cout<<"A mithical creature spotted";
            break;
        case 3:
            std::cout<<"You foound a wepon";
            break;
        default:
            std::cout<<"A monster appeared,and now is chaseing you";
            break;                   
    }
    
    return 0;
}