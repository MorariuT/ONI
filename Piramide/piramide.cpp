#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("piramide.in");
ofstream fout("piramide.out");
int main()
{
    int i = 2;
    int j = 1;
    int n,x,k;
    int M3 = 3;
    int primul_termen = 0;
    int ultimul_termen = 0;
    int num = 0;
    int nr_citit = 0;
    int Mk = 0;
    int suma = 3;
    fin >> n >> x >> k;
    while(j <= k)
    {
        fin >> nr_citit;
        j++;
        //cout << nr_citit << " ";
    }
    while(true)
    {
        Mk = M3 + i + 1;
        cout << "MK = " << Mk << endl;
        primul_termen = suma + 1;
        suma = suma + Mk;
        ultimul_termen = primul_termen + Mk - 1;
        i++;
        M3 = Mk;
        if(x >= primul_termen && x <= ultimul_termen)
        {
            fout << i-1 << endl;
        }
        if(n > ultimul_termen)
        {
            num = num+1;
        }
        else
        {
            break;
        }
    }
    fout << num+1;
    return 0;
}
