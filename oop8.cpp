#include <iostream>
using namespace std;

class Circle{
      private:
              int radius;
              
              public:
                     void circle_area(){
                         cout<<"enter radius";
                         cin >> radius;
                         cout<<"enter area of circle"<<3.142*radius*radius; 
                         
                          };
                     void circle_circumference(){
                         cout<<"enter radius";
                         cin >> radius;
                        cout<<"enter circumference of circle"<<2*3.14*radius; 
                           
                          }
      };
      
      int main(){
          Circle c;
          c.circle_area();
          c.circle_circumference();
          return 0;
          }
