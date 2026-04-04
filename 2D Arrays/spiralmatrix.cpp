#include <iostream>
using namespace std;


   void spiralMatrix(int mat[][4], int n , int m){
    int n =3 , m = 4;
    int srow=0 ,scol=0;
    int erow=n-1 ,ecol = m-1;

    while(   ){

    
    for(int j=scol;j<=ecol;j++){
       cout<<mat [srow][j]<< " ";
    }

    for (int i=srow+1;i<=erow ;i++){
       cout <<mat[i] [ecol] << " "  ;
    }
       for (int j=ecol-1;j<=srow+1 ;j++){
            cout <<mat[erow] [j] << " "  ;
    }
       for (int i=erow-1;i<=srow+1;i++){
            cout <<mat[i] [scol] << " "  ;
    }
    srow++;
    scol++;
    erow--;
    ecol--;
}
    }

    int main(){
        int matrix[][4] = {{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}}
    return 0;
}