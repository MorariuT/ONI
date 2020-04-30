#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sapca.in");
ofstream fout("sapca.out");
int main()
{
    int n = 0;
    fin >> n;
    if (n%3==1)
    {
        fout << "Sapca este rosie";
    }
    if (n%3==2)
    {
        fout << "Sapca este albastra";
    }
    if (n%3==0)
    {
        fout << "Sapca este galbena";
    }
    return 0;
}
