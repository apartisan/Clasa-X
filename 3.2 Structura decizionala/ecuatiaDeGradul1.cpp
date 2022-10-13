#include <iostream>
using namespace std;
int main(){
    float a,b,x;
    cout << "Dati a: ";
    cin >> a;
    cout << "Dati b: ";
    cin >> b;
    if (a!=0){
        x=-b/a;
        cout<<"Ecuatie determinata. x= " << x;
        }
    else
        if (b!=0)
            cout<<"Ecuatie incomplatibila";
        else
            cout<<"Ecuatie compatibila nedeterminata";
    return 0;
}
