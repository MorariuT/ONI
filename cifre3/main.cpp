#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cirfe3.in");
ofstream fout("cifre3.out");
int main()
{
    int n = 0;
    int c = 0;
    int n2 = 0;
    fin >> n;
    while(n > 0)
    {
        c = n%10;
        if(c % 2 == 0)
        {
            n2 = n2*10+c;
         //   cout << "Numarul este:" << n2;
        }
        n = n/10;
    }
    fout << n2 << endl;
    return 0;
}
