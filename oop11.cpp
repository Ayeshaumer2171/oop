#include <iostream>
using namespace std;

class Employee{
      private:
      string name;
      int  employee_ID ;
      double salary;
                   

      public :
      
      Employee(string empName, int empID, double empSalary) {
        name = empName;
        employee_ID = empID;
        salary = empSalary;
    }

      
              void calculate_salary(double performance){
                   if(performance>8){
                     salary*=2;
                cout << "Salary increased for employee " << name << ". New salary: $" << salary << endl;
                 
                   }
                   else{
            cout << "Salary not  increased for employee " << name << ". New salary: $" << salary << endl;
      
                        
                        }                
                   };
                   
                   void display(){
                  cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employee_ID << endl;
        cout << "Employee Salary: $" << salary << endl;      
                        }
              
      };
      
int main(){
    Employee emp("ali",1,50000);
 double performance;
    emp.calculate_salary(performance);
    emp.display();
     return 0;
    }
