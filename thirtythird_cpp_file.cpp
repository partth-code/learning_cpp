#include<iostream>

int main()
{
    //sizeof() operator can be used to calcutae size of arrays ,data types etc
    //we can also use it to see how many elements are there in array

    //note size of string is always the same irrespective of content as it is a reference data type

    int nums[] = {1,2,3,4,5,6,7};

    int num_elements = sizeof(nums)/sizeof(int);

    std::cout<<num_elements;

    return 0;
}