#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("min.in");
ofstream fout("min.out");
int main()
{
    int n = 0;
   long int mini = 100000000000000000000;
    while(true)
    {
        fin >> n;
        if (mini > n)
        {
            mini = n;
        }

        if(fin.eof()) break;
    }
    fout << mini << endl;
    return 0;
}
