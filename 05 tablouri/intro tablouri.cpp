#include <iostream>
using namespace std;

int main(){
    int a[50];
    int n,i;
    cout<< "Dati numarul de elemente: ";
    cin >>n;
    //citire elemente din tablou
    for (i=0; i<n; i++){
        cout<< "a[" <<i<<"]= "==[''''''''']']]]]]]]]]]]]]]]]]]]]]]]]]];
        cin>>a[i];
    }
    cout<<endl;
    //afisare elemente in ordinea citirii
    for (i=0; i<n; i++)
        cout<< a[i]<<" ";

    cout<<endl;
    //afisare elemente in ordinea inversa citirii
    for (i=n-1; i>=0; i--)
        cout<< a[i]<<" ";

return 0;
}
