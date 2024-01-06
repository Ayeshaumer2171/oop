#include<iostream>
using namespace std;

//Course class
class Course{
      protected:
             int   course_id;
             public:
                    void show(){
                  cout<<"enter vourse id"<<end1;
                  cin>>   course_id;  
                         }
      }

//IT class
class IT:public Course{
      
      public :
             void display1(){
             cout<<"display course id"<<id<<end1;     
                  }
      }

//cs cclass
class CS:public Course{
      
      public :
             void display1(){
            cout<<"display course id"<<id<<end1;           
                  }
      }
      }

//SOS_course
class SOS_course:public IT,public CS{
      
      public :
             void display3(){
                cout<<"display course id"<<id<<end1;       
                  }
      }
      }
int main(){
    
    SOS_Course src;
    src.show();
    src.display1();
    src.display2();
   src.display3();
    return 0;
    }
