#include<iostream>

struct employee
    {
        std::string name;
        int emp_no;
        bool exist  = true;
    };

void office(employee &employee);

int main()
{
    //struct in cpp can be used like a class which can store multiple values we can decleare a datatype of a struc

    

    employee employee1;
    employee1.name = "Oggy";
    employee1.emp_no = 23;
    //as third attribute of employee struct has a default value it will be fine if we dont specify it

    employee employee2;
    employee2.name = "Jack";
    employee2.emp_no = 45;
    employee2.exist = false;

    employee employee3;
    employee3.name = "Bob";
    employee3.emp_no = 455;


    return 0;

    //now struc can 
}

void office(employee &employee)
{
    std::cout<<"Welcome "<<employee.name << " to the office";
}