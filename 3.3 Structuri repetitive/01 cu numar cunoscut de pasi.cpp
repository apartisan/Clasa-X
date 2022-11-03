// Scrieti un program care afiseaza toate numerele de la 1 la n
//unde n este dat de la tastatura

/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n;i++)
        cout << i<<" ";
return 0;
}
*/

// Afisati numerele din 2 in 2
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i+=2)
        cout << i<<" ";
return 0;
}
*/
/*
// Afisati toate numerele pare de la 1 pana la n, unde n
//este dat de la tastatura
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
        if( i%2==0 )
            cout << i<<" ";
return 0;
}
*/
/*
// Afisati toate numerele de la 1 pana la n care sunt divizibile
// cu 3 si cu 5, unde n este dat de la tastatura
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
        if( i%3==0 && i%5==0)
            cout << i<<" ";
return 0;
}
*/

// Afisati toate numerele de la n pana la 0,
//unde n este dat de la tastatura
#include <iostream>
using namespace std;

int main(){
    int n;
   61cin>>n;
    for (int i=n; i>=0; i--)
            cout << i<<" ";
return 0;
}
