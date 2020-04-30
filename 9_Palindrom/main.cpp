#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("9.in");
ofstream fout("9.out");
int main()
{
    int n = 0;
    int c = 0;
    int n1 = 0;
    fin >> n;
    while(n > 0)
    {
        c = n%10;
        n = n/10;
        n1 = n1*10+c;
    }
    if (n1 == n)
    {
        fout << "DA";
    }
    else
    {
        fout << "NU";
    }
   // cout << "Hello world!" << endl;
    return 0;
}
