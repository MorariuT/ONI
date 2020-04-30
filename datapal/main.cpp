#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("datapal.in");
ofstream fout("datapal.out");
int main()
{
    int n = 0;
    int n2 = 0;
    int i = 1;
    int c1,c2,c3,c4,c5,c6,c7,c8;
    int max_sec = 0;
    int l_num[100];
    int h = 0;
    while(h < 100)
    {
        l_num[h] = 0;
        h++;
    }
    int num = 0;
    int nr = 0;
    int am_gasit = 0;
    fin >> n;
    while(i <= n)
    {
        fin >> n2;
        int raspuns = 0;
        c1 = (n2/10000000)%10;
        c2 = (n2/1000000)%10;
        c3 = (n2/100000)%10;
        c4 = (n2/10000)%10;
        c5 = (n2/1000)%10;
        c6 = (n2/100)%10;
        c7 = (n2/10)%10;
        c8 = n2%10;
        if(c1 == c8 && c2 == c7 && c3 == c6 && c4 == c5)
        {
            num++;
            nr = c5*10+(c6+1);
            l_num[nr]++;
        }
        i++;
    }
    int y = 0;
    while(y < 100)
    {
        if(l_num[y] > max_sec) max_sec = l_num[y];
        y++;
    }
    int q = 0;
    fout << num << endl;
    while(q < 100)
    {
        if(l_num[q] == max_sec) fout << q << " ";
        q++;

    }
    return 0;
}
