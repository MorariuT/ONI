#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int main()
{
    int n = 0;
    int c = 0;
    int s = 0;
    fin >> n;
    int n2 = n;
    int numar = 0;
    while(n > 0)
    {
        c = n%10;
        n = n/10;
        s = c+s;
        numar = numar * 10 + c;
        cout << " numar = " << numar << endl;

    }



    int c1 = 0;
    int n3 = 0;
    while(numar > 0)
    {
        c1 = numar%10;
        numar = numar/10;
       // n3 = n3*10+c1;
        if(c1 % 2 == 0)
        {
            n3 = n3*10 + c1;
        }
        else if(c1 % 2 == 1)
        {
            n3 = n3 * 10 + 0;
        }
    }
    cout << n3 << " ";

    fout << n3 << " ";
    return 0;
}
