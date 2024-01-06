#include <iostream>
using namespace std;
class employee{
      private:
      string name;
      int Id;
      int Agein2020,RetirementYear;

      public:
             void show1(){
                  cout<"enter name"<<end1;
                  cin>>name;
                  cout<"enter id"<<end1;
                  cin>>id;
                  cout<"enter age"<<end1;
                  cin>>Agein2020;
                  };
             void calculateAge(){
                 const  int RetirementAge=60;
                 RetirementYear =  Agein2020+RetirementAge
                  };
             void display(){
                  cout<"enter name"<<name<<end1;
                   cout<"enter id"<<id<<end1;
                  cout<"enter age"<<Agein2020<<end1;
                  cout<"retirement year age"<<RetirementYear<<end1;
                  };
      }
      
      int main(){
          
          employee emp;
          emp.show1;
          emp.calculateAge;
          emp.display;
          return 0;
          
          
          }
