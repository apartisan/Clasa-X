
#include <iostream>
using namespace std;

int main(){
    int i, n,k, v[20];
    cout<<"Cate elemente are vectorul? ";
    cin>> n;
    cout<<"Care sunt elementele vectorului? ";
    for(i=0; i<n;i++)
        cin >> v[i];
    //sortare elemente vectori
//    ...
    //sfarsit sortare
    cout <<"Ce valoare cautati? ";
    cin>>k;
    i=1;
    while (i<n && v[i]< k)
        i++;
    if (i<n)
       // if ( v[i]==k)
            cout <<"Valoare gasita pe pozitia " << i;
        else
            cout<< "Valoarea nu a fost gasita in vector.";
   // else
        // cout<< "Valoarea nu a fost gasita in vector.";
return 0;
}
