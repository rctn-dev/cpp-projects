#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    try{
        std::unique_ptr<Account> ramazan_account=make_unique<Checking_Account>("ramazan",100);
        ramazan_account-> withdraw(20);
    }
    catch(const IllegalBalanceException &e){
        std::cerr<<e.what()<<endl;
    }
    catch(const InsufficientFundsException &e){
        std::cerr<<e.what()<<endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

