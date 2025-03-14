#include<iostream>

int factoriali(int n);
int factorialr(int n);
int main()
{
    //recursions are more clean to write but take more memory and are slow
    //the tasks that can be performwd by recursion can also be performed by iteration

    std::cout<<factoriali(6)<<'\n';
    std::cout<<factorialr(6)<<'\n';

    return 0;
}

int factoriali(int n)
{
    if(n==0 ||n==1)
    {
        return 1;
    }
    else
    {
        int fac = 1;

        for(int i =n; i>=1; i--)
        {
        fac = fac*i;
        }

        return fac;

    }
    
}
int factorialr(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n*factorialr(n-1);
    }
    
}


