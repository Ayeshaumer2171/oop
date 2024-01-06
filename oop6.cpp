#include<iostream>
using namespace std;

//shape class
class shape{
              
      public:
             int a,b;
            void show ()
             {
       cin>>a>>b;
           }

          virtual   void area()=0;
      
      }

//triangle class
class triangle:public shape{
      
      public: void area(){
              
            cout<<"area of triangle"<<0.2*a*b<<end1;  
              }
   
      }
      
//rectangle class
class   rectangle:public shape{
        
       public: void area(){
              
            cout<<"area of rectangle"<<a*b<<end1;  
              }
        
        }    
        
//circle class
class circle:public shape{
      
  public: void area(){
              
            cout<<"area of circle"<<3.14*a*a<<end1;  
              }
      
      }
      
      int main(){
          triangle t;
          shape*st=&t;
          cout<<"Enter Length and Width : ";
          st.show();
          st.area();
          
          rectangle r;
          shape*sr=&r;
          cout<<"Enter Base and Height : ";
          sr.show();
          sr.area();
          
          circle c;
          shape*sc=&c;
          cout<<"Enter radius: ";
          sc.show;
          sc.area;
          
          return 0;
          
          
           }
