#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bacterie.in");
ofstream fout("bacterie.out");
int main()
{
   long long int comitate = 0;
   long long int m = 0,n = 0;
   long long int min = 10000000000000000;
   fin >> n >> m;
   long long int nr_scz = 0;
   if(min > n) min = n;
   if(min > m) min = m;
   cout << min << endl;
   comitate = m*n;
   cout << "comitate initiale = " << comitate << endl;
   long long int i = 1;
        nr_scz = min * (min+1)/2;
        cout << "nr_scz = " << nr_scz << endl;
        i++;
    comitate = comitate-nr_scz;
    fout << comitate << endl;
    return 0;
}
