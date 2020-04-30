#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pc.in");
ofstream fout("pc.out");
int main()
{
    long long int n = 0; fin >> n;
    long long int j = 1;
    long long int pret = 0;
    while(j <= n)
    {
        fin >> pret;
        //cout << pret << " (pret+1)/2 = " << (pret+1)/2 << " " << "rest = " << (pret+1)%2 << endl;
        long long int rest = (pret+1)%2;
        if(rest == 0)
        {
            fout << "1 ";
        }
        else if(rest != 0)
        {
            fout << "0 ";
        }
        j++;
    }
    return 0;
}
