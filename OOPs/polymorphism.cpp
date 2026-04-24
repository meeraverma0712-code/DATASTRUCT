#include <iostream>
using namespace std;

// compile time poly
// func overloading
    class print {
    public :
    void show(int x){
        cout<< " int : "<< x << endl;
    }
    void show(string str){
        cout<< " string: "<< str << endl;
    }
  };

  // operator overloading
  
  class complex{
    int real;
    int img;
    
    public :
    complex(int r , int i ){
        real = r;
        img = i ;
}
     void showNum( ){
        cout << real << "+" <<img <<"i"<<endl;    }
  

  void operator + (complex &obj){
    int resReal=this->real + obj.real ;
    int resImg =this->img + obj.img ;
    complex c3(resReal , resImg);
    cout << "res :" ;
     c3.showNum();
  }
};



   int main(){
   complex  c1(2,3);
   complex c2 (1,2);
   c1.showNum();
   c2.showNum();

   c1 + c2;
    return 0;
}

