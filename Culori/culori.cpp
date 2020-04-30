#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("culori.in");
ofstream fout("culori.out");
int main()
{
    int n = 0,k = 0; fin >> n >> k;
    int v[n+1];
    for(int i = 1; i <= n; i++)
    {
        fin >> v[i];
        //cout << v[i] << " ";
    }
    //cout << endl;
    int num = 0;
    for(int i = 1; i <= n; i++)
    {
      //  cout << v[i] << " ";
        if(v[i-1] == v[i] && v[i] == v[i+1]) num++;
        //cout << "i = " << i << " si n-1 = " << n-1 << endl;
        if(i == n)
        {
            //cout << "am intrat" << endl;
            //cout << v[i-1] << " " << v[i] << " " << v[0] << endl;
            if(v[i-1] == v[i] && v[i] == v[1])
            {
                num++;
            }
        }
        if(i == 1)
        {
            if(v[n] == v[i] && v[i] == v[i+1])
            {
                num++;
            }
        }
    }
    int secventa_max[k];
    int max = 0;
    for(int i = 1; i <= n; i++)
    {
        int am_brakeuit = 0;
        int num_egale = 0;
        int num_cifre = 0;
        int max1 = 0;
        int h[101];
        for(int g = 0; g < 101; g++)
        {
            h[g] = 0;
        }
        for(int j = i; j < i+k; j++)
        {

            int sunt_egale = 0;
            if(j > n)
            {
                //cout << v[j-n] << " ";
                h[v[j-n]]++;
            }
            else
            {
                //cout << v[j] << " ";
                h[v[j]]++;
            }
            for(int u = 0; u < 101; u++)
            {
                if(max1 < h[u]) max1 = h[u];
            }
            //cout << "j = " << j << " si i = " << i <<  endl;

            //cout << "max1 = " << max1 << endl;
            num_cifre++;
        }
        if(max < max1)
        {
            max = max1;
        }
        if(num_cifre < k) break;
        //k += 1;
    }
    fout << num << endl << max;
    return 0;
}
