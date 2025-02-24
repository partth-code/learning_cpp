#include <iostream>

//'typedef' keyword is used when we want to reduse typos like whem we want to call one data type with other name,we inclued _t st hte end of  the new name to recognize typedef this additional name is called alias
//this can also be done by using key word and that is more preferable as it hels in creating templates more efficiently
typedef std::string  string_t;

using num_t = int;

int main()
{
    string_t a = "Hi there";
    num_t r = 1;
    return 0;
}