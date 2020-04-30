#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifre2.in");
ofstream fout("cifre2.out");
int main()
{
    int n = 0;
    float n2 = 0;
    float c = 0;
    float cp = 0;
    fin >> n;
    while(n > 0)
    {
        c = n%10;
        cout << "Cifra curenta este " << c << endl;;
        if(c == cp)
        {

        }else
        {
            n2 = n2*10+c;
        }
        cp = c;
        n = n/10;
        cout << "Noul nr. este " << n << endl;
    }
    fout << n2;
    return 0;
}
