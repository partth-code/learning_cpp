#include <iostream>

int main()
{

    int month;

    std::cout<<"Enter a number between (1-12): ";
    std::cin>>month;

    switch (month)
    {
        case 1:
            std::cout<<"This month  is january";
            break;
        case 2:
            std::cout<<"This month is february";
            break;
        case 3:
            std::cout<<"This month is march";
            break;
        case 4:
            std::cout<<"This month is april ";
            break;
        case 5:
            std::cout<<"This month is may";
            break;    
        case 6:
            std::cout<<"This month is june";
            break;          
        case 7:
            std::cout<<"This month is july";
            break;              
        case 8:
            std::cout<<"This month is august";
            break;             
        case 9:
            std::cout<<"This month is september";
            break;            
        case 10:
            std::cout<<"This month is october";
            break;             
        case 11:
            std::cout<<"This month is november";
            break;                
        case 12:
            std::cout<<"This month is december";
            break;      
        default:
            std::cout<<"Please enter a month between (1-12)";                                       
    }
    return 0;
}