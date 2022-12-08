/*

*/

#include <iostream>

using namespace std;
int main(){
   long long int n, s=0;
   cin>>n;
  /* suma lui Gauss */
 //  s = n*(n+1)/2;

   /* Fara formula*/
    for (int i=1; i<=n; i++)
        s = s+i;
   cout <<s;

return 0;
}
