#include<iostream>

int main()
{
    std::string foods[100];
    int size = 100;
    std::fill(foods,foods+(size/2),"paneer");
    std::fill(foods+(size/2),foods+(size),"mushroom");

    for(std::string food : foods)
    {
        std::cout<<food<<'\n';
    }
    return 0;
}