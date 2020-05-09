#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("datapal.in");
ofstream fout("datapal.out");
int main()
{
    int n = 0; fin >> n;
    char v[8];
    int num = 0;
    char x = 10;
    int termen1 = 0;
    int termen2 = 0;
    int secole[101];
    for(int i = 0;i < 101;i++) secole[i] = 0;
    for(int i = 0;i < n;i++)
    {
        fin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5] >> v[6] >> v[7];
        termen1 = v[4]-'0';
        termen2 = v[5]-'0';
        //cout << secol << endl;
        if(v[0] == v[7] && v[1] == v[6] && v[2] == v[5] && v[3] == v[4])
        {
            num++;
            int secol = termen1*10+termen2+1;
            secole[secol]++;
        }
    }
    fout << num << endl;
    for(int i = 0;i < 101;i++)
    {
        if(secole[i] > 0)
        {
            fout << i << " ";
        }
    }
    return 0;
}
