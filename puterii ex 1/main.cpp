#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("puteri.in");
ofstream fout("puteri.out");
int main()
{

    //1.
    long int e,p;
    int i = 1;
   long int r = 1;
    //2.
    fin >> e >> p;
    //3.
    while (i <= e)
    {
        r = r*p;
        i = i+1;
    }
    fout << r << endl;
    return 0;
}
