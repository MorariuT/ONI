#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("lacusta.in");
ofstream fout ("lacusta.out");
int main()
{
    //1
    int n = 0;
    int m = 0;
    int z = 0;
    int s = 0;
    int sapt = 0;
    int rest = 0;
    //2
    fin >> n >> m >> z;
    //3
    sapt = z/7;
    rest = z%7;
    s = sapt*5*n+rest*2*m;
    if (rest==6)
    {
        s = s*n+m;
        fout << s;
    }
    else
    {
        s = s*rest*n;
        fout << s;
    }

    return 0;
}
