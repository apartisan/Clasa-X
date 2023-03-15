#include <iostream>
using namespace std;
int main (){
    int v[7]= {1,1,2,0,4,5,6};
    int i, n=7;

    i=0;
    while (i<n){
        cout<<v[i];
        i++;
    }
    cout<<endl;

    i=0;
    while (i<n){
        i++;
        cout<<v[i];
    }
 cout<<endl;

    i=0;
    do{
        i++;
        cout<<v[i];
    }while (i<n);

 cout<<endl;
    i=0;
    do{
        cout<<v[i];
        i++;
    }while (i<n);


}
