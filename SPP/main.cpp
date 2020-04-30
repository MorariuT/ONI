#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("spp.in");
ofstream fout("spp.out");
int main()
{
    int q = 0;
    fin >> q;
    long long int i = 1;
    long long int x,p;
    while(i <= q)
    {
        fin >> x >> p;
        //int j = 1;
       long long int suma_totala = 0;
       unsigned int p_p = p*p;
       //cout << "############p_p = " << p_p << endl;
       long long int suma_finala = 0;
        unsigned int suma_x = 0;
        long long int t = 1;
        suma_x = ((x-1)*((x-1)+1)*(2*(x-1)+1))/6;
        cout << "suma_x = " << suma_x << endl;
        long long int j = p;
        while(true)
        {
            suma_totala = (j*(j+1)*(2*j+1))/6;

            cout << "suma_totala while = " << suma_totala << " j = " << j << endl;
            if(suma_totala-suma_x < p_p) break;
            j--;
        }
        fout << j+1 << endl;
        i++;
    }
  //  cout << "Hello world!" << endl;
    return 0;
}
