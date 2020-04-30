#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("aoc2020.in");
ofstream fout("aoc2020.out");
int main()
{
    long long int n = 0;
    fin >> n;
    long long int i = 2;
    long long int a = 0;
    long long int b = 0;
    long long int c_m_m_m_c = 0;
    int c_m_m_d_c = 0;
    fin >> a;
    //cout << "produs = " << produs_a_b << endl;
   // cout << "b = " << b << endl;;
    while(i <= n)
    {
        fin >> b;
        if(b == 0)
        {

        }
        else
        {
            long long int b2 = b;
            long long int a2 = a;
            long long int c;
            while(b2 > 0)
            {
                c = a2%b2;
                a2 = b2;
                b2 = c;
            }
            cout << "cmmdc = " << a2 << endl;
            c_m_m_m_c = a*b/a2;
            cout << "cmmmc = " << c_m_m_m_c << endl << a << " " << b << endl;
            a = c_m_m_m_c;
        }

        i++;
    }
    fout << a;
    return 0;
}
