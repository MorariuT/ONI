#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("vo.in");
ofstream fout("vo.out");
int main()
{
    //1.
    int a = 0;
    int b = 0;
    int p = 0;
    int r = 0;
    //2.
    fin >> a >> b;
    //3.
    p = (a+b)/3;
    r = (a+b)%3;
    //4.
    fout << p << " " << r;




    return 0;
}
