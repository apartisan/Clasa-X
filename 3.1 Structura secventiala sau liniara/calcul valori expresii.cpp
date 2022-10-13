//se citesc x,y,z. Sa se calculeze expresiile A, B,C
#include <iostream>
#include <cmath>
using namespace std ;
int main () {
    float x,y,z,A,B,C;
    cout<<" Dati 3 numere: ";
    cin>>x>>y>>z;
    C=(12*x+1)/(pow(y,2)+2)-sqrt(z*z+27);
    B=C-3*x+5*y-45*z;
    A=5*x+3*B-21*y+pow(z,4);
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C;
    return 0;
}
