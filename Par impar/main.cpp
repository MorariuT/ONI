#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("parimpar.in");
ofstream fout("parimpar.out");
int main()
{
    int n = 0;
    fin  >> n;
    if (n%2==0){
       fout << "Este par";
    } else {
       fout << "Nu e par";
    }
    return 0;
}
