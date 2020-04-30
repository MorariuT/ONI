#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("can.in");
ofstream fout("can.out");
int main()
{
    int ziua_1 = 0;
    int ziua_2 = 0;
    int ziua_3 = 0;
    int k = 0;
    int factor = 1;
    int s = 0;
    int n = 0;
    int i = 1;
    fin >> k >> n;
    while(i <= n)
    { //entru fiecare zi
        ziua_2 = k*factor;
        s = s+ziua_2;
        factor = factor*10+1;
        i = i+1;
    }
    fout << s << endl;
    return 0;
}
