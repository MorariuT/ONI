#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("comori1.in");
ofstream fout("comori1.out");
int main()
{
    int n = 0;
    fin >> n;
    int termen_gresit = 0;
    int l_termeni[n];
    int i = 0;
    while(i < n)
    {
        fin >> l_termeni[i];
        i++;
    }
    int j = 0;
    while(j < n-1)
    {
        cout << l_termeni[j] << endl;
        if(l_termeni[j] > l_termeni[j+1])
        {
            termen_gresit = 1;
            fout << j+2 << " ";
        }
        j++;
    }
    if(termen_gresit == 0) fout << "0";
   // cout << "Hello world!" << endl;
    return 0;
}
