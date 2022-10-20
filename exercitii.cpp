#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ofstream fout("exercitii.out");

int main(){
    float a;
    cout<<"Dati un numar: ";
    cin >> a;
    fout << abs(a)<<'\n';
    fout << pow(a,3)<< endl;



    fout.close();
    return 0;
}
