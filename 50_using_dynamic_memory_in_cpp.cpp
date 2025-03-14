#include<iostream>

int main()
{
    //dynaminc memory is useful when we dont know how much memory we will use during compilation of the program like whe nwe are taking user input 
    //so in those cases we use dynamic memory to do so we have to use new key word
    
    //when we are done with the pointeer with dynamic memory the memory should be delete t o prevent memory leak with delete keyword
    // by usin new while definig a pointer we are allocating dynamic memory in it

    int size = 1;

    char *pGrades = nullptr;

    std::cout<<"Enter numner of students: ";
    std::cin>>size;

    pGrades = new char[size]; // this creates an array wit hspecified size

    for(int i = 0;i<size;i++)
    {
        std::cout<<"Enter grade of student "<<i+1;
        std::cin>>pGrades[i];
    }


    for(int i = 0;i<size;i++)
    {
        std::cout<<"Grade of student "<<i+1 <<" is"<< pGrades[i];
    }

    delete[] pGrades;



    return 0;
}