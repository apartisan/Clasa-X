
#include <iostream>
using namespace std;

int main(){
    int i, n,k, v[20];
    int p,u,m, poz;
    bool gasit;
    cout<<"Cate elemente are vectorul? ";
    cin>> n;
    cout<<"Care sunt elementele vectorului? ";
    for(i=1; i<=n;i++)
        cin >> v[i];
    //sortare elemente vectori
    //    ...
    //sfarsit sortare
    cout <<"Ce valoare cautati? ";
    cin>>k;

    if (k>=v[1] && k<=v[n]){
        p=1;
        u=n;
        poz=0;
        do{
             m = (p+u)/2;
            if (v[m] == k)
                poz = m;
            else
                if (k > v[m])
                    p = m+1;
                else
                    u = m-1;
        }
        while (poz == 0 || p < u );

        if (poz !=0)
            cout <<"Gasit pe pozitia"<< m;
        else
            cout <<"Nu am gasit valoarea";
    }
    else
        cout <<"Valoare inexistenta";

return 0;
}
