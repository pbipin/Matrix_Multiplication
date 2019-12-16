/*
Author: Bipin P. (mailto: bipinp2013@gmail.com)
http://iambipin.com
101010101    10  101010101    10  101     10    101010101
1010101010   10  1010101010   10  1010    10    1010101010
10      101  10  10      101  10  10 01   10    10      101
10      101  10  10      101  10  10  10  10    10      101
1010101010   10  1010101010   10  10   01 10    1010101010
1010101010   10  101010101    10  10    1010    101010101
10      101  10  10           10  10     010    10
10      101  10  10           10  10      10    10
1010101010   10  10           10  10      10    10
101010101    10  10           10  10      10    10  10
C++ Program to perform Matrix Multiplication for matrices of all orders
*/
#include <iostream>
#include <conio.h>
using namespace std;
int i,j,k,r1,c1,r2,c2;
class matrix {
    public: int matrixA[10][20]; int matrixB[10][20]; int matrixC[10][20];
            void getdata();

};
void matrix:: getdata() {
    cout<<"Enter the order of matrix A: "<<endl;
    cin>>r1>>c1;
    cout<<"Enter the order of matrix B: "<<endl;
    cin>>r2>>c2;

    if(c1 != r2) {
        cout<<"Matrix Multiplication not possible";
        abort;
    }
    else {
        cout<<"Enter elements of matrix A: "<<endl;
        for(i=0; i<r1; i++) {
            cout<<"Row "<<i+1<<endl;
            for(j=0; j<c1; j++) {
                cin>>matrixA[i][j];
            }
        }

        cout<<"Enter elements of matrix B: "<<endl;
        for(i=0; i<r2; i++) {
            cout<<"Row "<<i+1<<endl;
            for(j=0; j<c2; j++) {
                cin>>matrixB[i][j];
            }
        }

        //cout<<"Enter elements of matrix C: "<<endl;
        for(i=0; i<r1; i++) {
            for(j=0; j<c2; j++) {
                matrixC[i][j] = 0;
            }
        }

    }
}

class multiplication:public matrix {
    public: void process();
};
void multiplication::process() {
    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++) {
            for(k=0; k<r2; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    cout<<"The resultant matrix is:"<<endl;
    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++) {
            cout<<matrixC[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
int main() {    
    multiplication b;
    b.getdata();
    if(c1 == r2) {
         b.process();
    }   
}



