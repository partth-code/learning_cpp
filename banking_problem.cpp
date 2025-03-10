#include<iostream>

float total_amount = 10;

void deposit(double balance);
void  withdraw(double balance);
void ac_balance(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do{

    std::cout<<"\nEnter\n1. To check balance\n2. To deposit money\n3. To withdraw money\n4. To exit\n";
    std::cout<<"Enter choice: ";
    std::cin>>choice;

    
        switch(choice)
        {
            case 1:
                ac_balance(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                withdraw(balance);
                break;
            case 4:
                std::cout<<"Thanks for visiting!!"<<'\n';
                break;
            default:
                std::cout<<"Invalied Input\n";
                break;
        }
    }while(choice != 4);

    return 0;
}

void deposit(double balance)
{
    double amount;
     std::cout<<"Enter amount you want to deposit, in $";
     std::cin>>amount;

     if (amount>0)
     {
        std::cout<<"\nYou deposited $"<<amount;

        balance = balance+amount;
        std::cout<<"\nBalance in you accout is $"<<balance;
     }
     else
     {
        std::cout<<"\nYou entered an invalied amount";

     }

}

void withdraw(double balance)
{
    double amount;
    std::cout<<"\nEnter amount you want to withdraw, in $";
    std::cin>>amount;

    if(amount>balance)
    {
        std::cout<<"\nNot enough balance to withdraw $"<<amount;
       
    }
    else
    {
        std::cout<<"\nYou have withdrawin $"<<amount;
        
        balance = balance-amount;
        std::cout<<"\nBalance in you accout is $"<<balance;
    }
}

void ac_balance(double balance)
{
    std::cout<<"\nTotal balance of your account is $"<<balance;
}