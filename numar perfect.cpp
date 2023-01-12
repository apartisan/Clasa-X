/*

*/

#include <iostream>
using namespace std;

int main(){
  int n, suma=0;
  cin>>n;
  for (int i = 1; i<=n/2;i++){
    if (n%i==0)
        suma = suma + i;
  }
  if (suma == n)
    cout<<"Este numar perfect"<<endl;
  else
    cout<<"Mai incearca "<<endl;

return 0;
}
