#include<iostream>
using namespace std;

 class employee{
      private:
          string name, id;
     int numberOfworkinghours;    
     float perHoursalary;
     
     public:
            employee(){
cout<<" Enter employee name : ";
cin>>name;
cout<<"Enter employee id : ";
cin>>id;
cout<<"Enter employee no. of working hours : ";
cin>>numberOfworkinghours;
cout<<"Enter employee PER hour salary : ";
cin>>perHoursalary ;
}

      }
      
      
      class Adhoc_employee:public employee {
           
           float EmployeeSalary;
          public:
                 void calculateSalary (){
                      
    EmployeeSalary= numberOfworkinghours*perHoursalary;

                      }
                      
             void display(){
                  cout<<" Enter employee name : "<<name;
     cout<<"Enter employee id : "<<id;
     cout<<"Enter employee no. of working hours : "<<numberOfworkinghours'
     cout<<"Enter employee PER hour salary : "<<perHoursalary'
                  }
           
           } 
           
           
     int main(){
         Adhoc_employee emp;
         emp.calculateSalary();
         emp.display():
                      
                       return 0;
         }
