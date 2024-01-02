#include <iostream>
#include <iomanip>
#include <memory>
#include <vector>
#include <string>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

void display_main_menu();
void display_account_menu();

int main() {
    std::vector<Account*> accounts{};
    char selection{};
    do{
        display_main_menu();
        std::cout << "Enter your choice: " << std::endl; 
        std::cin>>selection;
        if (selection=='1'){
            display_account_menu();
            std::cout << "Enter your choice: " << std::endl; 
            char choice{};
            std::string name{};
            double balance{};
            std::cin>>choice;
            std::cout<<"Enter name: "<<std::endl;
            std::cin>>name;
            std::cout<<"Enter balance: "<<std::endl;
            std::cin>>balance;
            if (choice=='1'){
                Account* acc=new Checking_Account(name, balance);
                accounts.push_back(acc);
                std::cout << *acc <<" succesfully created."<< std::endl;
    
            }
            else if (choice=='2'){
                Account* acc=new Savings_Account(name, balance);
                accounts.push_back(acc);
                std::cout << *acc <<" succesfully created."<< std::endl;

            }
            else if (choice=='3'){
                Account* acc=new Trust_Account(name, balance);
                accounts.push_back(acc);
                std::cout << *acc <<" succesfully created."<< std::endl;
   
            }
            else{
                std::cout<<"Illegal choice, please try again."<<std::endl;
            }
        }
        else if(selection=='2'){
            display (accounts);
        }
        else if(selection=='3'){
            float amount{0};
            std::cout<<"Enter the amount: ";
            std::cin>>amount;
            deposit(accounts,amount);
        }
        else if(selection=='4'){
            float amount{0};
            std::cout<<"Enter the amount: ";
            std::cin>>amount;
            withdraw(accounts,amount);
        }

    } while(selection!='5');
    
    return 0;
}

void display_main_menu(){
    int total_width{25};
    std::cout<<std::setw(total_width)<<std::setfill('=')<<""<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout<<std::setprecision(2)<<std::fixed;
    std::cout <<std::setw(total_width)<<std::left<< "\nBank Management System" << std::endl;
    std::cout<<std::setw(total_width)<<std::setfill('=')<<""<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout <<std::setw(total_width)<<std::left<< "1. Open Account" << std::endl;
    std::cout <<std::setw(total_width)<<std::left<< "2. Account Details" << std::endl;
    std::cout <<std::setw(total_width)<<std::left<< "3. Deposit" << std::endl;
    std::cout <<std::setw(total_width)<<std::left<< "4. Withdraw" << std::endl;
    // std::cout <<std::setw(total_width)<<std::left<< "5. Modify Account Details" << std::endl;
    // std::cout <<std::setw(total_width)<<std::left<< "6. Delete Account " << std::endl;
    std::cout <<std::setw(total_width)<<std::left<< "5. Exit " << std::endl;
    std::cout<<std::setw(total_width)<<std::setfill('=')<<""<<std::endl;
    std::cout<<std::setfill(' ');    
}

void display_account_menu(){
    int total_width{25};
    std::cout<<std::setw(total_width)<<std::setfill('=')<<""<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout<<std::setprecision(2)<<std::fixed;
    std::cout <<std::setw(total_width)<<std::left<< "\nChoose Account Type" << std::endl;
    std::cout<<std::setw(total_width)<<std::setfill('=')<<""<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout <<std::setw(total_width)<<std::left<< "1. Checking" << std::endl;
    std::cout <<std::setw(total_width)<<std::left<< "2. Savings" << std::endl;
    std::cout <<std::setw(total_width)<<std::left<< "3. Trust" << std::endl;
}
