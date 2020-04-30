#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("tombola.in");
ofstream fout("tombola.out");
ifstream fin2("tombola.in");
int main()
{
    int n,m;
    int i = 1;
    int maxi = 0;
    fin >> n;
    while(i <= n)
    { // Penru fiecare nr
        fin >> m;
        int pc = m;
        int c = 0;
        while(pc >= 10)
        { //  Pentru prima cifra a numerelor m
            pc = pc/10;
        }
        c = pc % 10;
        i = i+1;
        if (c > maxi)
        {
            maxi = c;
        }
        i = i+1;
    }
    int prima_cifra = 0;
    int num = 0;
    i = 0;
    while(i <= n)
    {
        fin2 >> m;
        prima_cifra = m;
        while(prima_cifra >= 10)
        {
            prima_cifra = prima_cifra/10;
        }
        cout << "Maxi = " << maxi << " " << "Prima cifra = " << prima_cifra;
        if(prima_cifra == maxi)
        {
            num = num+1;
        }
        else
        {
            num = num;
        }
        i = i+1;
    }
    fout << num << endl << maxi << endl;
    return 0;
}
