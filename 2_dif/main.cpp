#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("2_dif.in");
ofstream fout("2_dif.out");
int main()
{
    int a,b,c;
    fin >> a >> b >> c;
    if (a > b && a > c)
    {
        if (b > c || b == c)
        {
            fout << a-c;
        }
        if (b < c)
        {
            fout << a-b;
        }
    }
    if (a > b && a < c)
    {
        fout << c-b;
    }
    if (a < b && a < c)
    {
        if (b < c || b == c)
        {
            fout << c-a;
        }
        if (b > c)
        {
            fout << b-a;
        }
    }

    cout << "Hello world!" << endl;
    return 0;
}
