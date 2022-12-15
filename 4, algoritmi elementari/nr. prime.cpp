/*

*/

#include <iostream>
using namespace std;

int main(){
    int n, i,j,x;
    bool prim;
    cout<<"n= ";
    cin>>n;
    for (i=1; i<=n; i++){
        cout<<"Dati un numar: ";
        cin >>x;
        if (x==1) prim=false;
        else{
            prim=true;
            j=2;
            while (prim &&j<=sqrt(x))
                if (x%j==0)
                    prim = false;
                else
                    j++;
        }
        if(prim)
            cout << x <<" este prim"<<endl;
    }

return 0;
}
