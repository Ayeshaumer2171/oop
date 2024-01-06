#include <iostream>
using namespace std;

class student{
      private:
              string name;
              int rollno;
              public:
                     
            student(string n,int rn){
                    name=   n;
                    rollno=   rn; 
                      }         
                      
                 //copy constructor
                 
                  student(student& obj){
                    name=obj. name;
                    rollno=obj.rollno ;      
                            }   
                            
               void display(){
                    cout<<"enter name and roll no"<<name<<rollno;
                    }             
                            
      };
int main(){
    student stu("ayesha",1);
    stu.display();
    
    student  st(stu);
    st.display();
    return 0;
    }
