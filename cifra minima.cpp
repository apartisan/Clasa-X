/*

*/

#include <iostream>
using namespace std;

int main(){
    int n,minim=9;
    cin>>n;
    while (n>0){
        int uc = n%10; //ultima cifra
        if(uc <minim)
            minim = uc;
        n= n/10; //indepartez ultima cifra
    }
    cout<< minim;

return 0;
}
