#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ci.in");
ofstream fout("ci.out");
int main()
{
    int t = 0;
    int p = 0;
    int f = 0;
    int n = 0;
    int q = 0;
    int a;
    int r = 0;
    int c = 0;
    int x = 0;
    fin >> t >> p >> f >> x >> c;
    //a
    n = t/p;
    //b
    q = t/f;
    //c
    a = (x-1)/2;
    //d
    r = c*2*n*3;
    fout << n << " " << q+3 << " " << a+1 << " " << r;
    cout << "Hello world!" << endl;
    return 0;
}
