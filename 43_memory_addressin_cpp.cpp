#include <iostream>

int main()
{
    std::string name = "Codes";
    int age  = 34;
    bool val = true;
    // & is used to pass memory address
    std::cout<<&name<<'\n'<<&age<<'\n'<<&val<<'\n';
    return 0;
}