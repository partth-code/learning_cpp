#include<iostream>

float total_amount = 10;

void deposit(float amount);
void  withdraw(float amount);
void balance();

int main()
{
    float money = 23.5;

    deposit(43);
    withdraw(12);
    balance();

    return 0;
}

void deposit(float amount)
{
     total_amount+=amount;
}

void withdraw(float amount)
{
    total_amount -=amount;
}

void balance()
{
    std::cout<<"Totoal balance of your account is: "<<total_amount;
}