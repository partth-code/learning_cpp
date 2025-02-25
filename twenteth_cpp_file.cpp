#include <iostream>


int main()
{
    //for loop takes 3 statements as inpt (the variable of incrementation;condition till it has to be done;increment or decrement)
     // for loops can we useful for indexing or to create matrix like nests

     std::string sample = "This is a sample stirng jsut for iteration";
    for(int i  = 1 ;i<=10;++i)
    {
        std::cout<<i<<'\n';
    }

    std::cout<<"Happy new year";


    for(char a : sample)
    {
        std::cout<<a<<" ";
    }
    return 0;
}