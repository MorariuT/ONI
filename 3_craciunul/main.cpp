#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("3.in");
ofstream fout("3.out");
int main()
{
    int d,r,m,s;
    fin >> d >> r >> m >> s;
    if (s >= d || s >= r || s >= m)
    {
        fout << "Poate";
    }
    if (s < d || s < r || s < m)
    {
        fout << "Nu poate";
    }
    cout << "Hello world!" << endl;
    return 0;
}
