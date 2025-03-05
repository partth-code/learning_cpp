#include<iostream>

int main()
{
    int  nums[]  = {1,2,3,4,5,6,7,8,9};

    for(int i = 0;i<(sizeof(nums)/sizeof(int));i++)
    {
        std::cout<<nums[i]<<'\n';
    }

    // or we can use foreach loop for that

    for(int i:nums)
    {
        std::cout<<i<<'\n';
    }
    return 0;
}