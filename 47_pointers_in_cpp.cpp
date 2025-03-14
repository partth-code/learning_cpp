#include<iostream>

int main()
{
    int val = 45;
    std::string name = "cosmic coder";
    bool age  = true;

    int *pVal = &val;  //artrics is used to decleare a pointer variable and & is address of operator it gives the address of selected variable
    std::string *pName  = &name; //a name of a pointer container should start with p it is a convention
    bool *pAge = &age;
    bool **ppAge = &pAge; // it stores address of a pointer 


    int values[]  = {2,3,4,4,3,3,2,3};

    int *pValues = values; // here no address of operator required as name of the array is an af=dress itself

    //Note astrics can also be used to dereference an operator
    std::cout<<*pAge; //output is age itself
    return 0;
}