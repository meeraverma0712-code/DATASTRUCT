#include <iostream>
using namespace std;
   class Car {
    string name ;
    string colour;

    public:
      Car(){
        cout << "constructor without parameters...\n";
      }
      Car(string name , string colour){
        cout << "constructor with parameters.\n";
        this->name = name;
        this->colour = colour;
      }
      void start(){
        cout << "car is starting...\n";
      }
      void stop(){
        cout << "car is stopped\n";
      }

      string getname(){
        return name;
      }
  };
   
    int main(){
    Car c0;
    Car c1("maruti" , "black");
    Car C2("suv 700" , "black");

    
     return 0;
}