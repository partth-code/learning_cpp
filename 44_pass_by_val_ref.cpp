#include <iostream>

void swap(int &x,int &y,const int z);
int main()
{
    int x = 3, y= 2;

    swap(x,y , 564);

    //when we use & before declearing a parameter for a functon we are refrencing the variable we are not creating the copy ie changes by function will be made in original variable



    return 0;
}
// we can add const key wordd before declearing data type of a function so that we cannot edit it when a value is applid to it 



void swap(int &x , int &y , const int z)
{
    x = x^y;
    y = x^y;
    x = x^y;

}