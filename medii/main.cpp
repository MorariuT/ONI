#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("medii.in");
o
fstream fout("medii.out");
int main()
{
    float n = 0;
    float i = 1;
    float m = 0;
    float n1 = 0;
    float m2 = 0;
    float m3 = 0;
    float s2 = 0;
    fin >> n;
    while(i<=n)
    {
        fin >> m;
        float s = 0;
        int j = 1;
        while(j<=m)
        {
            fin >> n1;
            s = s+n1;
            j = j+1;
        }
        m2 = s/m;
        fout << m2 << endl;
        s2 = s2+m2;
        i = i+1;
    }
    m3  = s2/n;
    fout << "Media generala este:" << m3;
    return 0;
}
