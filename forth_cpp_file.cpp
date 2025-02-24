#include <iostream>


//  creating a namespace
//they are used to avoid naming conflicts like we want to use diffrent values of same variable x but we cannot decleare x 2 times directly so we use namespace

/*
Note -:
 if we use x from namespace first we have to write first::x
 if we are usin x form namespace second we have to write second::xor

 if we didnt mentioned any thing it will use x decllarend in the main 

 if we wrote 
 using namespace first 

default value of x will be from namespace first and we have to mention if  we use it from secdond and viseversa
*/

namespace first
{
   int x = 2;
}
namespace second
{
    int x = 3;
}

int main()
{
    using namespace first;
    

    std::cout<<x;
    return 0;
}