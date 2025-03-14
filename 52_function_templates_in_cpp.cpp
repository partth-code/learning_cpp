#include <iostream>

// now if we want to perform avg of two numbers across int ,double, char , we might need to create 3 overloaded functions for doinf the same task
//to solve this issue we use templates 
template <typename dtype>

//now this will work if both a,b will have same data type
dtype max( dtype a, dtype b)
{
    return ((a>b)?a:b);
}

//but what if we are comparing an int and a double to do do we can create a template as

template<typename dtype1,typename dtype2>
//now type of func can be dtype1 or dtype2 as per requirement but we can give it auto to automatically detect the output type

auto max(dtype1 a, dtype2 b)
{
    return ((a>b)?a:b);
}
int main()
{
    return 0;
}