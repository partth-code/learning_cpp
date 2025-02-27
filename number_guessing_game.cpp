#include<iostream>
#include<ctime>
#include<cstdlib>

int main()
{
    //initializing random
    srand(time(NULL));

    //random number
    int rand_num = rand()%10+1 , chance = 1,guess;

    while (chance<=10)
    {
        std::cout<<"ENter your guess: ";
        std::cin>>guess;

        if(guess>rand_num)
        {
            std::cout<<"Enter a bit lower value"<<std::endl;
        }
        else if(guess<rand_num)
        {
            std::cout<<"Enter a bit higher value"<<std::endl;
        }
        else
        {
            std::cout<<"You won the game , the number was: "<<rand_num<<std::endl;
            break;
        } 
        chance+=1;
    }
    return 0;

}