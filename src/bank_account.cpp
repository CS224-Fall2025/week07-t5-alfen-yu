#include <iostream>

class BankAccount {
    private:
        char[] accountTitle; 
        unsigned int balance; 
        int limit; 
    public: 
        BankAccount() {
            accountTitle = ''; 
            balance = 0; 
            limit = 0; 
        }
        BankAccount(char[] title, int bal) : accountTitle(title), 
        balance(bal), limit(0){}

        BankAccount(char[] title, int bal, int lim) : accountTitle(title), 
        balance(bal), limit(lim){}

        void deposit(int amount) {
            balance += amount; 
            std::cout << "Successfully Deposited " << amount << std::endl; 
            std:::cout << "Closing Status: \n";
            std:cout
        }
        
        void withdraw(int amount) {
            if ((balance > amount) && (limit > amount)) {
                balance -= amount; 
            } else {
                std::cout << "Withdraw Failed: daily limit is " << limit << std::endl; 
            }
        }

        void printDetails() {
            std::cout << "Account Number: " << accountTitle << std::endl;
            std::cout << "Balance: " << balance << std::endl;
        }
        ~BankAccount() {}
};

int main() {
    // assigning variables and taking input from the user 
    char[] accTitle; 
    unsigned int bal; 
    int limit; 
    char action;
    int amount; 

    std::cout << "<<< "; 
    std::cin >> accTitle >> bal >> limit; 

    BankAccount ba(accTitle, bal, limit);

    std::cin >> action >> amount; 
    if (action == 'w') {
        ba.withdraw(amount);
    } else if (action == 'd') {

    }
    
   
    return 0; 
}