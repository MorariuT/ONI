#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("planta.in");
ofstream fout("planta.out");
int main()
{
    //1
    int d,a,b,n,s,su;
    int i = 1;
    //2
    fin >> d >> a >> b >> n;
    //3
    while(i <= n)
    {
        if (i%2 == 0)
        {
            d = d-b;
             cout << "if = adevarat d =  " << d << endl;
        }
        else
        {
            d = d+a;
             cout << " if = fals d = " << d << endl;
        }
        i = i+1;
    }
    cout << "final d = " << d << endl;
    cout << a << " = a" << endl;
    cout << b << " = b" << endl;
    cout << n << " = n" << endl;
     //4
    fout << d;

    return 0;
}
