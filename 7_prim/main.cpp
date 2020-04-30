#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("7.in");
ofstream fout("7.out");
int main()
{
    int n = 0;
    int i = 2;
    int num = 0;
    fin >> n;
    int d = n-1;
    while(i <= d)
    {
        if(n % i == 0)
        {
            num = num+1;
        }
        else
        {
            num = num;
        }
        i = i+1;
    }
    if (num > 0)
    {
        fout << "Nu";
    }
    else
    {
        fout << "Da";
    }
   // cout << "Hello world!" << endl;
    return 0;
}
