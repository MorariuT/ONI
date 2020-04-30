#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("prim.in");
ofstream fout("prim.out");
int main()
{
    int i = 2;
    int n = 0;
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
    if(num > 0)
        {
            fout << "NU";
        }
    else
        {
            fout << "DA";
        }
  //5  cout << "Hello world!" << endl;
    return 0;
}
