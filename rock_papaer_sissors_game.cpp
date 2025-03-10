#include<iostream>
#include<ctime>
#include<cstdlib>

int main()
{
     std::srand(std::time(NULL));

     int comp_choice = (std::rand() %3)+1;
     
     int player_choice;
     
     std::cout<<"Enter\n 1 for stone\n 2 for paper\n 3 3 for sissors";
     std::cout<<"\nEnter choice: ";
     std::cin>>player_choice;

     std::cout<<"Choice of player: "<<player_choice<<"\nChoice od computer: "<<comp_choice<<'\n';

     if( (comp_choice == 1 && player_choice == 2) || (comp_choice == 2 && player_choice == 3) || (comp_choice == 3 && player_choice == 1) )
     {
        std::cout<<"Player Won!!";
     }
     else if(comp_choice==player_choice)
     {
        std::cout<<"There is a Tie";
     }
     else
     {
        std::cout<<"Computer Won!!";
     }

    return 0;
}