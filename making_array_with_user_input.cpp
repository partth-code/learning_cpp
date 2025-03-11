#include <iostream>

int main()
{
    std::string temp,foods[8];

    for(int i = 0;i<=sizeof(foods)/sizeof(foods[1]);i++)
    {
        std::cout<<"Enter your fav food or enter q to quit: ";
        std::getline(std::cin,temp);

        if(temp == "q")
        {
            break;
        }
        else
        {
            foods[i]= temp;
        }
    }

    std::cout<<"Food you like are: "<<'\n';
    for(int i = 0; !foods[i].empty();i++)
    {
        std::cout<<foods[i]<<'\n';
    }
    return 0;
}