#include <iostream>
using namespace std;
   class animal {
   
   public:
   void eats(){
    cout << " it is eating \n" << endl;
   }
   void sleeps(){
    cout << " it is sleeping\n" << endl;
   }
 };
 
    class mammal : public animal{
    public:
       string bloodtype = " warm ";
       mammal (){
       bloodtype = " warm ";
       }
  };
    class dog : public mammal {
    public:
    void tailwag(){
            cout << " a dog wags its tail \n" << endl;
        }
  };
   int main(){
   dog d1;
   d1.eats();
   d1.sleeps();
   d1.tailwag();
   cout<< d1.bloodtype << endl;
return 0;
}