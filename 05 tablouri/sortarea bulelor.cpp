/*

*/

#include <iostream>
using namespace std;

int main(){
    int A[100], n;
    bool esteSortat;
    cin>>n;
    for (int i=0; i<n; i++)
        cin >>A[i];

    //sortarea bulelor
    do{
        esteSortat=true;
        for (int i=0; i<n-1; i++){
            if (A[i] > A[i+1]){
                int aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
                esteSortat=false;
            }
        }
    }while(!esteSortat);

    //afisare vector
    for (int i=0; i<n; i++)
        cout<< A[i]<<" ";


return 0;
}
