#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pare.in");
ofstream fout("pare.out");

int main()
{
    int n;
    int num = 0;
    //fin >> n;
    while(true)
    {
        fin >> n;
        if(n % 2 == 0)
        {
            num = num+1;
        }
        if(fin.eof()) break;
    }
    fout << num << endl;
    return 0;
}
