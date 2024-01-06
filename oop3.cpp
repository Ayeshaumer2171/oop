#include<iostream>
#include<string>
using namespace std;

//class engine
class engine{
      private:
      int engine_number;
      
      public:
         engine(int eg){
                engine_number=eg;    
           cout<<"this is engine"<<end1;       
                  }    
                  
               void get_engine_number(){
                        return engine_number;
                        }       
      
      }


//class passenger 
 class passenger{
      private:
             string passenger_name;
             
            public:
                    passenger(string n){
                          passenger_name=n;           
                                } 
                                
                   void get_passenger_name(){
                        return passenger_name;
                        }             
                     
              }


//class car
class car{
      private:
              engine*eng;
              passenger *pass;
              
              public :
                   car(engine*eng, passenger *pass){
                     this->eng=     eng;
                      this->pass=pass ; 
                   }
                   
                   
                   void display(){
                        cout<<"display passenger name "<<this->eng<<get_engine_number<<end1;
                        cout<<"display engine number "<<this->pass<<get_passenger_name<<end1;
                        }
                   
              }
              
       int main(){
           engine eng(123);
           passenger pass('ayesha');
          car c(&eng ,&pass);
          c.display():
                      return 0; 
           }       
              
