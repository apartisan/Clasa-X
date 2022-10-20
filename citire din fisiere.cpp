#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int main(){
    int lung, lat, aria;
    fin >>lung >> lat;
    aria = lung * lat;
    fout << aria;

}
