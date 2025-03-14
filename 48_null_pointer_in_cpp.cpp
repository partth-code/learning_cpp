#include<iostream>

int main()
{
    //null pointers are created when we initialized a pointer but didnt gave an address so what is that pointer pointing ? nothing so we give it nullpointer that will mean it will point nowhere
    int *pX = nullptr;
    int x = 234;

    //pX = &x;
    
    if (pX == nullptr)
    {
        std::cout<<"The pointer is empty";
    }
    else
    {
        std::cout<<"The pointer is not empty";
    }
    return 0;
}