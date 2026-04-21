#include <iostream>
using namespace std;

    
    class Car {
    string name ;
    string colour;

    public:
      Car(){
        cout << "constructor has been called.object is being created...\n";
      }
     void start(){
      cout << "car has started...\n";
     }

     void stop(){
      cout << "car has stopped\n";
     }
    };
   
    int main(){
    Car c1;
    
     return 0;
}