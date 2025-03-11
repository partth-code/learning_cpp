#include<iostream>

int indexof(int arr[] , int size , int element);


int main()
{
    int values[] = {2,2,3,4,23,43,23,53,54,3,4,3,3,34};

    std::cout<<indexof(values,sizeof(values)/sizeof(values[1]),34);

    return 0;
}

int indexof(int arr[] , int size , int element)
{
    int index = -1;

    for(int i = 0; i<= size; i++)
    {
        if( arr[i] == element)
        {
            index = i;
        }
    }
    return index;
}