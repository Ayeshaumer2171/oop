#include<iostream>
using namespace std;

//class vehicle
class  vehicle{
      
       public:
               
       int mileage;
       int manufacturer;
          virtual void    first_maintenance()=0;
          void display(){
               cout<<"display mileage"<<mileage<<end1;
               cout<<"display manufacturer"<<manufacturer<<end1;
               }
       }

//class Four_Wheeler
class Four_Wheeler:public vehicle{
      public:
            void    first_maintenance(){ 
             if(mileage>=5000){
                 cout<<"Vehicle needs maintenance"<<end1;
                 cin>>mileage;
                           }else{
                         cout<<" Vehicle not needs maintenance  "<<end1;     
                           }
             }
      
      }

//class Two_Wheeler
class Two_Wheeler:public vehicle{
      public:
            void    first_maintenance(){ 
             if(mileage>=3000){
                 cout<<"Vehicle needs maintenance"<<end1;
                           }else{
                         cout<<" Vehicle not needs maintenance  "<<end1;     
                           }
             }
      
      }

int main(){
    Four_Wheeler car;
    Two_Wheeler bike;
    
    cout<<"enter manufacture of car"<<end1;
    cin>>car.manufacture;
       cout<<"enter milage of "<<end1;
    cin>>car.milage;
    
    cout<<"enter manufacture of bike"<<end1;
    cin>>bike.manufacture;
       cout<<"enter milage of bike"<<end1;
    cin>>bike.milage;
    
    car.first_maintenance();
    car.display();
    
    bike.first_maintenance();
    bike.display();
    
    
    
    
    return 0;
    }
