#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere3.in");
ofstream fout("numere3.out");
int main()
{
    int c = 0;
    fin >> c;
    if(c == 1)
    {
        int a,b,c;
        fin >> a >> b >> c;
        int suma = 0;
        int cif_a = 0;
        int cif_b = 0;
        int cif_c = 0;
        while(a > 0)
        {
            cif_a = a%10;
            a = a/10;
            suma += cif_a;
        }
        while(b > 0)
        {
            cif_b = b%10;
            b = b/10;
            suma += cif_b;
        }
        while(c > 0)
        {
            cif_c = c%10;
            c = c/10;
            suma += cif_c;
        }
        fout << suma << endl;
    }
    if(c == 2)
    {
        int a,b,c;
        fin >> a >> b >> c;
        fout << a << " " << c << endl;
        int a2 = a;
        int c2 = c;
        int suma_a = 0;
        int suma_c = 0;
        int cif_a = 0;
        int cif_b = 0;
        int cif_c = 0;
        while(true)
        {

            while(a > 0)
            {
                cif_a = a%10;
                a = a/10;
                suma_a += cif_a;
            }
            while(c > 0)
            {
                cif_c = c%10;
                c = c/10;
                suma_c += cif_c;
            }

            fout << a2 + suma_a << " " << c2 - suma_c << endl;
            a = a2+suma_a;
            c = c2-suma_c;
            if(a > b && c < b)
            {
                fout << "0" << endl;
                break;
            }
            else if(a > b)
            {
                fout << "1" << endl;
                break;
            }
            else if(c < b)
            {
                fout << "2" << endl;
                break;
            }
        }
    }
    return 0;
}
