#include <iostream>
using namespace std;

class BankAccount{
      private:

            int account_number;
            int balance;
           public: 
                   
              BankAccount(int ac,int b){
                    account_number=ac;
                     balance=b;         
                            }     
                   
            void deposit(double amount){
              balance+=amount;
              cout<<"amount deposit successfully";
              
                 
                 }
            void withdraw(double amount){
             balance-=amount;
             cout<<"balance widdrw successfukt";
             
                 }
      };
int main(){
    BankAccount b(100,200);
    b.deposit(500);
    b.withdraw(200);

    return 0;
    }
