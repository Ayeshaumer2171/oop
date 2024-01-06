#include <iostream>
using namespace std;

class Triangle{
      private:
              int side1,side2,side3;
       public:
              
          Triangle(int s1,int s2,int s3){
                 side1=s1;
                  side2=s2;
                  side3=s3;  
                     }    
              
                 void triangleType(){
                  if(side1==side2 && side2==side3){
                    cout<<"triangle is equal";
                    }
                  else if(side1==side2||side1==side3||side2==side3 ){
                          cout<<"triangle is isosceles"; 
                       }  
                      else {
                             cout<<"triangle is scalen"; 
                           }  
  } ;   
      };
 int main(){
     
     Triangle t(3,2,3);
    t. triangleType();
    return 0;
     
     }
