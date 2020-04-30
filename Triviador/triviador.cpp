#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("triviador.in");
ofstream fout("triviador.out");
ifstream fin2("triviador.in");
int main()
{
    int n = 0;
    int copil_1  = 0;
    int copil_2 = 0;
    int copil_3 = 0;
    int max = 0;
    int max_2 = 0;
    int i = 1;
    fin >> n;
    while(i <= n)
    {
        int s = 0;
        int sp = 0;
        fin >> copil_1 >> copil_2 >> copil_3;
        s = copil_1+copil_2+copil_3;
        if(s > max)
        {
            max_2 = max;
            max = s;
            cout << "Max = " << max << " " << " max2 = " << max_2 << endl;
        }

        i = i+1;
    }





    int j = 1;

    while(j <= n)
    {
        int s = 0;
        int sp = 0;
        fin2 >> copil_1 >> copil_2 >> copil_3;
        cout << "copil_1 = "<< copil_1 << " copil_2 = " << copil_2 << " copil_3 = " << copil_3;
        s = copil_1+copil_2+copil_3;
        if(s < max && max_2 < s)
        {
            max_2 = s;
        }
        if(max_2==0)
        {
            fout << "TOT AU CASTIGAT";
            break;
        }

        j = j+1;
        sp = s;
    }
    fout << max << " " << max_2;
    return 0;
}
