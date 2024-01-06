#include<iostream>
using namespace std;
class rational{
      private:
   
      int numerator;
      int denominator;
      static int count;
      
      public:
             void show(){
                           cout<<"enter name"<<end1;
                          cin>>name;
                          cout<<"enter id"<<end1;
                          cin>>id;
                          cout<<"enter marks"<<end1;
                          cin>>marks;
                          cout<<"enter cgpa"<<end1;
                          cin>>cgpa;
                         
                        }
                  
           //parameterized constructor
           rational(int n,int d){
                 numerator=n;
                 denominator =d;
                 count++;
               }       
                  
             //copy constructor and divion overloadig operator 
             rational operator /(rational & r){
                      rational ob(0,0);
                      
            ob. numerator=this->numerator/r.numerator;
             ob.denominator =this->denominator/r.denominator;
             return ob;
              }     
   
              //copy constructor and multiply overloadig operator 
             rational operator *(rational & r){
                      rational ob(0,0);
                      
            ob. numerator=this->numerator*r.numerator;
             ob.denominator =this->denominator*r.denominator;
             return ob;
              }   
              
              //display multplication  
                  
                   void Multiplication()
                               {
                            cout << "Multiplication : " << numerator << "*" << denominator << endl;
                             }
 
                      //display multplication 
              void Division()
                           {
                      cout << "Division : " << numerator <<"/" <<denominator<< endl;
                       cout << "count : "<<count;
                       }
      }
       
       int check(){
           if(denominator==0)(
           cout << "Error: Denominator cannot be zero. Setting denominator to 1." << endl;
           return 0;
           }
           return 1;
           }
           
     int rational::count = 0; 
      
       
int main(){
         
          rational    obj1(2,3);
          rational    obj2(5,6);
          
          rational result_divide=obj1/obj2;
          rational result_multiply=obj1*obj2;
          
          result_divide.Division();
          result_multiply.Multiplication()'
           return 0;
          }
