#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("so.in");
ofstream fout("so.out");
int main()
{
    int n = 0;
    int i = 1;
    int m = 0;
   // int q = 0;
    int c = 0;
    int c1 = 0;
    int num = 0;
    int c2 = 0;
    int c3 = 0;
    //int c4 = 0;
    int maxi = 0;
    //int a = 0;
    //int b = 0;
    int regula = 1;
    fin >> n;
    while(i <= n)
    { //pentru fiecare numar m
        fin >> m;
        int a = 0;
        int b = 0;
        int c4 = 0;
        int q = 0;
        if(regula == 1)
        {
            c = (m/1000)%10;
            q = m - c * 1000;
            cout << q << " ";
            regula = 2;
        }
       else if(regula == 2)
        {
            c = m%10;
            c1 = (m/10)%10;;
            c2 = (m/100)%10;
            c3 = (m/1000)%10;
            c4 = c3*100 + c1*10 + c;
            cout << c4 << " ";
            regula = 3;
        }
       else if(regula == 3)
        {
            c = m%10;
            c1 = (m/10)%10;;
            c2 = (m/100)%10;
            c3 = (m/1000)%10;;
            a = c3*100 + c2*10 + c;
            cout << a << " ";
            regula = 4;
        }

       else if(regula == 4)
        {
            c = m%10;
            c1 = (m/10)%10;;
            c2 = (m/100)%10;
            c3 = (m/1000)%10;
            b = c3*100 + c2*10 + c1;
            cout << b << " ";
            regula = 1;
        }
        cout << endl << "A = " << a << " " << "B = " << b << " " << "C4 = " << c4 << " " << "Q = " << q << endl;;;
        if (q > maxi)
        {
            maxi = q;
            num = 1;
        }
       else if (q == maxi)
        {
            num = num+1;
        }
        if (a > maxi)
        {
            maxi = a;
            num = 1;
        }
       else if (a == maxi)
        {
            num = num+1;
        }
        if (c4 > maxi)
        {
            maxi = c4;
            num = 1;
        }
        else if(c4 == maxi)
        {
            num = num + 1;
        }
        if (b > maxi)
        {
            maxi = b;
            num = 1;
        }
        else if(b == maxi)
        {
            num = num+1;
        }

        i = i+1;
    }
    fout << maxi << " " << num << endl;
    return 0;
}
