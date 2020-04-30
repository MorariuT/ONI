#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("n.in");
ofstream fout("n.out");
int main()
{
    int n = 0;
    int i = 1;
    int p = 0;
    fin >> n;
    p = n*n;
    int z = n-1;
    while(i <= z)
    {
        //cout << " p = " << p << endl;;
       long long int q = i*i;
       // cout << q << " " << endl;
        if(q < p)
        {
           // cout << p << " ";
            fout << "Patrate " << q << endl;;
        }
        i = i+1;
    }







    // Cuburi
    int c = 0;
    int m = 0;
    c = n*n;
    int j = 1;
    fin >> m;
    int a = 0;
    while(j <= z)
    {
        //cout << " p = " << p << endl;;
       long int a = j*j*j;
        //cout << a << " " << endl;
        if(a < c)
        {
           // cout << p << " ";
            fout << "Cuburi " << a << endl;;
        }
        j = j+1;
    }
    return 0;
}
