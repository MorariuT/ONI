#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("3cifre.in");
ofstream fout("3cifre.out");
int main()
{
    long long int n = 0;
    int l_n[900];
    int x = 0;
    fin >> n >> x;
    int cifre = 0;
    int nr_citit = 0;
    int i = 1;
    int max = 0;
    int min = 10000;
    int j = 0;
    while(j < 900)
    {
        l_n[j] = 0;
        j++;
    }
    while(i <= n)
    {
        fin >> nr_citit;
        int nr3c = 0;
        while(nr_citit >= 100)
        {
            nr3c = nr_citit%1000;
            nr_citit = nr_citit/10;
            if(nr3c > max && nr3c >= 100) max = nr3c;
            if(nr3c < min && nr3c >= 100) min = nr3c;

        }
        i++;
    }
    int y = 0;
    int num_max = 0;
    while(y < 900)
    {
        if(max == y)
        {
            num_max++;
            l_n[y]++;
        }
        y++;
    }
    int q = 0;
    int num_min = 0;
    while(q < 900)
    {
        if(min == q)
        {
            num_min++;
            l_n[y]++;
        }
        q++;
    }
    cout << "num_max = " << num_max << endl;
    cout << "num_min = " << num_min << endl;
    cout << max << " " << min;
    return 0;
}
