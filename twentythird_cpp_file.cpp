#include<iostream>
#include<ctime>
#include<cstdlib>

int main()
{
    //initializing random
    srand(time(NULL));

    //generating random number
    int rand_num = rand()%6+1;

    std::cout<<"The random number is: "<<rand_num;
    

    return 0;
}