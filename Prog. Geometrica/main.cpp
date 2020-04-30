#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("10.in");
ofstream fout("20.out");

int main()
{
    int k = 0;
    int n = 0;
    int i = 0;

    int s = 0;

    fin >> k >> n;
    while (i <= n)
    { //pentru fiecare i
        int j = 0;
        int p = 1;
        while(j < i)
        { //
            p = k*p;
            j = j+1;
        }
        s = p+s;
        cout << "p = " << p <<endl;
        i = i+1;
    }
    fout << s;

    if(s % 13 == 0)
    {
        fout << "DAAAAAAAAAAAAAAAAAA";
    }
    else
    {
        fout << "NUUUUUUUUUUUUUUUUUU";
    }
    cout << "Hello world!" << endl;
    return 0;
}
