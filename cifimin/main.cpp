#include <iostream>
using namespace std;
int main()
{
    long long int n = 0; cin >> n;
    int a = 0,b = 0;
    int i = 2;
    int am_gasit = 0;
    long long int min = 2147483185;
    long long int v_1 = 0;
    long long int v_2 = 0;
    while(i <= n-1)
    {
        if(n % i  == 0) am_gasit = 1;
        i++;
    }
    if(am_gasit == 0)
    {
        cout << "1" << " " << n;
    }
    else
    {
        i = 2;
        long long int catul = 0;
        long long int dif = 0;
        while(i <= (n-1)/2)
        {
            if(n % i == 0)
            {
                catul = n/i;
                if(catul > i) dif = catul-i;
                else if(catul <= i)
                {
                    dif = i-catul;
                }
                if(dif < min)
                {
                    min = dif;
                    v_1 = i;
                    v_2 = catul;
                }
                if(catul <= i)
                {
                    break;
                }
            }
            i++;
        }
         cout << v_1 << " " << v_2 << endl;
    }

 //b   cout << "Hello world!" << endl;
    return 0;
}
