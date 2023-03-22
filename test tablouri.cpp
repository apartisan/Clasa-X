#include <iostream>
using namespace std;
int main (){
    int v[7]= {1,1,2,0,4,5,6};
    int i=0, nr=0;
    do{
        if (i==v[i])
            nr++;
    }while(i<6 && v[i++]);
    cout<<nr;



}
