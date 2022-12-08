/*

*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
   unsigned int n, nr;
   unsigned int p=1;
   double rad;
   cin>>n;
   for (int i=1; i<=n; i++){
        cin>>nr;
        p = p*nr;
   }
 // double exp = (double)1/n;
   rad = pow(p,1.0/n);
   cout << rad;

return 0;
}
