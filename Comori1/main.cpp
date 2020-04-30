#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("comori1.in");
ofstream fout("comori1.out");
int main()
{
    int n = 0;
    fin >> n;
    int l_puncaje[n];
    int i = 0;
    int am_gasit = 1;
    int am_gasit2 = 0;
    int l_puncaje_ant = 0;
    while(i < n)
    {
        fin >> l_puncaje[i];
        //cout << "l_puncaje_ant = " << l_puncaje_ant << " l_punctaje = " << l_puncaje[i] << endl;
        if(l_puncaje_ant <= l_puncaje[i] && am_gasit != 0)
        {
            am_gasit = 1;
           // cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$am_gasit = " << am_gasit << endl;
        }
        else if(l_puncaje_ant > l_puncaje[i])
        {
            fout << i+1 << " ";
            am_gasit = 0;
        }
        l_puncaje_ant = l_puncaje[i];
        //cout << l_puncaje_ant << endl;
        i++;
    }
    if(am_gasit == 1)
    {
        fout << "0";
    }
    return 0;
}
