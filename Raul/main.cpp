#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("raul.in");
ofstream fout("raul.out");
int main()
{
    int n,x,d,z;
    fin >> z;
    int i = 1;
   long long int a = 0;
   long long int b = 0;
    while(i <= z)
    {
        //cout << " fdvfdrevrverbg" << endl;
        fin >> n >> x >> d;
       // cout << n << " " << x << " " << d << endl;
       int suma_b = 0;
       int suma_a = 0;
        if(d <= 2)
        {
            b = x;
            int j = 1;
            while(j <= n+1)
            {
                cout << "b = " << b << endl;
                b = b*d;
                suma_b = suma_b + b;
                //cout << suma_b << " ";
                j++;
            }
           // cout << suma_b/2;
        }
        else if(d > 2)
        {
            a = x;
            int y = 1;
            while(y <= n+1)
            {
                a = a+d;
                y++;
                suma_a += a;
            }
           // cout << suma_a;
        }
        i++;
        if(d <= 2)
        {
            fout << (suma_b/2)%10 << endl;;
        }
        else if(d > 2)
        {
            fout << suma_a%10 << endl;
        }
    }
    return 0;
}
