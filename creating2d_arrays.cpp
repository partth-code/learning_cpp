#include<iostream>

int main()
{
    std::string foods[][3] = {{"pasta","pizza","garlic bread"},
                              {"paneer","mushroom","corn"},
                              {"manchurean","fried rice","chaomene"}};
    // while creating 2d arrays specifing number of columns is necessary even if we do not specify number of rows

    int no_rows = sizeof(foods)/sizeof(foods[0]);
    int no_col = sizeof(foods[0])/sizeof(foods[0][0]);

    for(int i=0; i<no_rows;i++)
    {
        for(int j=0;j<no_col;j++)
        {
            std::cout<<foods[i][j]<<" ";
        }
        std::cout<<'\n';
    }

    return 0;
}