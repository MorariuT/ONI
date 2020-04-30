#include <iostream>
#include <fstream>
#include <math.h>
#include <limits.h>
using namespace std;
ifstream fin("copii.in");
ofstream fout("copii.out");
int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        long long int n = 0; fin >> n;
        int k = 0; fin >> k;
        int nr5 = 0;
        for(int i = 1;i <= n;i++)
        {
            int i2 = i;
            while(true)
            {
                if(i2%5 == 0)
                {
                    nr5++;
                    i2 /= 5;
                }
                if(i2%5 != 0) break;
            }
        }
        cout << "am_numarat " << nr5 << endl;
        long long factorial = 1LL;
        long long int put_k = (long long int)pow(10,k);
        long long int nr2 = nr5;
        cout << "put_k = " << put_k << endl;
        put_k *= 10;
        for(int i = 1;i <= n;i++)
        {
            //cout << "teren initial = " << factorial << endl;
            int i2 = i;
            while(i2 % 5 == 0 && nr5 > 0)
            {
                i2 /= 5;
                nr5--;
            }
            //cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ " << nr5 << " nr2 = " << nr2 << endl;
            while(i2 % 2 == 0 && nr2 > 0)
            {
                i2 /= 2;
                nr2--;
            }
            factorial *= 1LL * i2;
            factorial %= 1LL * put_k;
            //cout << factorial << endl;
        }
        //cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " << factorial << endl;

        put_k /= 100;
        for(int i = 0;i < k;i++)
        {
            int j = factorial/put_k;
            fout << j%10;
            put_k /= 10;
        }
    }
    if(cer == 2)
    {

    }
    return 0;
}
