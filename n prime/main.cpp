#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("n.in");
ofstream fout("n.out");
int main()
{
    int n = 0;
    int i = 2;


    cin >> n;
    int d2 = n-1;
    while(i <= n)
    { //pentru fiecare nr i;
        int d = i;
       // cout << d << " ";
        int j = 2;
        int amgasit = 0;
        while(j < d)
        {
            if (d % j == 0)
            {
                amgasit = amgasit+1;
            }
            j = j+1;
        }
        if(amgasit > 0)
        {

        }
        else
        {
            cout << d << endl;
        }
        i = i+1;
    }
    return 0;
}
