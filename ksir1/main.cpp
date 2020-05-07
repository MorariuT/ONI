#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ksir1.in");
ofstream fout("ksir1.out");
int main()
{
    long long int k = 0; fin >> k;
    //cout << k << endl;
    long long int g = 1;
    long long int suma = 0;
    long long int suma_p = 0;
    long long int num = 0;
    long long int i = 0;
    long long i2 = 0;
    long long nr_pentru_generare = 0;
    long long int numere_sir = 1;
    while(true)
    {
        suma += numere_sir;
        nr_pentru_generare += 2;
        if(k <= suma)
        {
        //  cout << k << " " << numere_sir-i << " " << i+1 << " " << numere_sir << "am iesit" << " " << suma << " " << suma_p << endl;
            i2 = i;
            break;
        }
        numere_sir += 2;
        i++;
        suma_p = suma;
    }
    long long int numarator = suma_p;
    int break1 = 0;
    for(int i = 1;i <= i2+1;i++)
    {
        numarator++;
       //out << i;
        if(numarator == k)
        {
            break1 = 1;
       //   cout << "AM INTRAT" << endl;
            fout << i;
            break;
        }
    }
    if(break1 == 0)
    {
        for(int i = 1;i <= i2;i++)
        {
       //  cout << i2+1;
            numarator++;
            if(numarator == k)
            {
         //    cout << "AM INTRAT" << endl;
                fout << i2+1;
                break;
            }
        }
    }
    return 0;
}
