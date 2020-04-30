#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("6.in");
ofstream fout("6.out");

int main()
{
    int n = 0;
    int m = 0;
    int i = 1;
    int d = 1;
    int maxi = 0;
    fin >> n >> m;
    while(i <= n)
    {
        if(m % i == 0 && n % i == 0)
        {
            if(i > maxi)
            {
                maxi = i;
            }
        }
        i = i+1;
    }
    fout << maxi;

    cout << "Hello world!" << endl;
    return 0;
}
