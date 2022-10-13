//interschimbã valorile a douã variabile
#include <iostream>
using namespace std;
int main(){
    int a,b,aux;
    cout<<"Dati 2 numere: ";
    cin >> a >> b;
    aux=a;
    a=b;
    b=aux;
    cout <<"Numerele schimbate sunt "<<a<<" "<< b<<endl;
    return 0;
}

