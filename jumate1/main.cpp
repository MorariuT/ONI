#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("jumatate1.in");
ofstream fout("jumatate1.out");
int main()
{
    long long int n = 0;
   long long int y = 0,x = 0;
    fin >> n;
   long long int n2 = n;
    int nr = 0;
    int num_cif = 0;
    int cifra = 0;
    while(n > 0)
    {
        cifra = n%10;
        num_cif++;
        n = n/10;
        //cout << "cifra = " << cifra << endl;
    }
    cout << num_cif << endl;
    if(num_cif % 2 == 0)
    {
        nr = num_cif/2;
        cout << "num cif y = " << nr << endl;
    }
    else
    {
        nr = num_cif/2+1;
        cout << "num cif y = " << nr << endl;
    }
    int j = 1;
    int putere_10 = 1;
    while(j <= nr)
    {
        putere_10 = putere_10*10;
        j++;
    }
    cout << putere_10 << endl;
    if(num_cif%2 == 0)
    {
        y = n2%putere_10;
        x = n2/putere_10;
    }
    else if(num_cif%2 == 1)
    {
        y = n2%putere_10;
        x = n2/putere_10;
    }
    cout << "x = " << x << " y = " << y << endl;
    if(x == 0 || y == 0)
    {
        fout << "1";
    }
    else
    {
        int c = 0;
        while(y > 0)
        {
            c = x%y;
            x = y;
            y = c;
        }
        fout << x;
    }

    return 0;
}
