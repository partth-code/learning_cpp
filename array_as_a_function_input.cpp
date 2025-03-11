#include<iostream>

int total_price(int price[], int size);

int main()
{
    int prices[] = {230,334,500,603,123};
    
    std::cout<<total_price(prices, sizeof(prices)/sizeof(prices[0]))<<'\n';
    return 0;
}

int total_price(int price[],int size)
{
    int total = 0;
    // cannot use for each loop here as array as an input will delay in pointer ie the size of array therfore size based for loop are not allowed 
    for(int i = 0; i<= size; i++)
    {
        total += price[i];
    } 
    return total;
}