#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("po2.in");
ofstream fout("po2.out");
int main()
{
    //1.
    int a = 0;
    int b = 0;
    int s = 0;

    //2.
    fin >> a >> b;
    //3.
    while(a <= b)
    {
        //fout << a << " ";
        int nr = a;
        // pt fiecare a
        int p = 1;
        int c1 = 0;
        while(nr > 0)
        {
            c1 = nr%10;
            // fout << c1 << " ";
            nr = nr/10;
            p = c1*p;
       }

        if(p == 0)
        {
            s = s+1;
        }

        a = a+1;
    }




    fout << s;

    return 0;
}
