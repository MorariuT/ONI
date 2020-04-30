#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("patrate.in");
ofstream fout("patrate.out");
int main()
{
    int t = 0;
    fin >> t;
    int n,k,m;
    int n_patrate = 0;
    fin >> n >> k >> m;
    int num_pa = 0;
    int i = 1;
    int suma = 0;
   // int j = 0;
    int vb = 0;
    int r_b = 0;
    int j = 1;
    while(j <= n)
    {
        suma = suma + i*i;
        j++;
    }
    while(i <= k)
    {

        r_b = 2*i*i + 2*i;
        i++;
    }
    int y = 1;
    int suma_p = 0;
    while(true)
    {
        suma_p = suma_p+2*y*y + 2*y;
        cout << "suma_p = "<< suma_p << endl;
        y++;
        if(m >= suma_p)
        {
            num_pa++;
            cout << num_pa << endl;
        }
        else
        {
            break;
        }
    }
    if(t == 1) fout << suma;
    else if(t == 2) fout << r_b;
    else if(t == 3)
    {
        if(m < 12) fout << "1";
        else if(m > 11) fout << num_pa;
    }
    return 0;
}
