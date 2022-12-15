/*

*/

#include <iostream>
using namespace std;

int main(){
    unsigned int a,b,r;
    cin>>a>>b;
    while (a%b){
        r = a%b;
        a=b;
        b=r;
    }
    cout<<"cmmdc este "<<b;
return 0;
}
