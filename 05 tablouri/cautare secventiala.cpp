#include <iostream>
using namespace std;

int main(){
    int a[50];
    int n,i,val;
    cout<< "Dati numarul de elemente: ";
    cin >>n;
    cout<< "Scrieti valorile elementelor: ";
    for (i=0; i<n; i++){
       cin>>a[i];
    }
    cout << "Dati valoarea cautata: ";
    cin >> val;
    i=0;
    while(i<n && a[i]!=val)
        i++;
    if (i<n)
        cout<<" Valoare gasita pe pozitia " << i;
    else
        cout <<"Valoarea nu a fost gasita";
return 0;
}
