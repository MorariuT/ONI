#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("max.in");
ofstream fout("max.out");
int main()
{
    int i = 1;
    int maxi = 0;
    int n = 0;
    while(true)
    {
        fin >> n;
        if (n > maxi)
        {
            maxi = n;
        }
        //procesezi
      //  cout <<  << endl;

        //gata procesarea
        if (fin.eof()) break;
    }
    fout << maxi;

    return 0;
}
