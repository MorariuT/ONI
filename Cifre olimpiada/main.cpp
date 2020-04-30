#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifre.in");
ofstream fout("cifre.out");
int main()
{
    long n = 0;
    int cifa = 0;
    int cifp = 0;
    long n1 = 0;
    fin >> n;
    cout << "n=" << n << endl;
    while (n > 0)
    {   // Pentru cirele lui n.
        cifa = n % 10;
        n = n / 10;
        if (cifp == cifa)
        {
            n1 = n1;
        }
        else
        {
            n1 = n1*10+cifp;
        }
        cifp = cifa;
        cout << cifa << " ";
        cout << cifp << " ";
    }
    cifp = cifa;
    cout << "n1=" << n1 <<endl;
    cout << "n1*10+cifp = " << n1*10+cifp << endl;
    cout << "n1*10+cifa = " << n1*10+cifa << endl;
    return 0;
}
