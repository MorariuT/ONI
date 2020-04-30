#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("stampile.in");
ofstream fout("stampile.out");
int main()
{
    int n = 0;
    int i = 1;
    int m = 0;
    int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    int num0 = 0,num1 = 0,num2 = 0,num3 = 0,num4 = 0,num5 = 0,num6 = 0,num7 = 0,num8 = 0,num9 = 0;
    fin >> n;
    int mini = 999;
    while(i <= n)
    {  //Pentu fiecare numar citit

        int c = 0;

        fin >> m;
        while(m > 0)
        {
            c = m%10;
            m = m/10;
            if(c == 0)
            {
                c0  = c;
                num0 = num0+1;
            }
            if(c == 1)
            {
                c0 = c;
                num1 = num1+1;
            }
            if(c == 2)
            {
                c0 = c;
                num2 = num2+1;
            }
            if(c == 3)
            {
                c0 = c;
                num3 = num3+1;
            }
            if (c == 4)
            {
                c0 = c;
                num4 = num4+1;
            }
            if(c == 5)
            {
                c5 = c;
                num5 = num5+1;
            }
            if(c == 6)
            {
                c6 = c;
                num6 = num6+1;
            }
            if(c == 7)
            {
                c7 = c;
                num7 = num7+1;
            }
            if(c == 8)
            {
                c8 = c;
                num8 = num8+1;
            }
            if(c == 9)
            {
                c9 = c;
                num9 = num9+1;
            }

        }

        cout << " num0 = " << " " << num0 << endl;
        cout << " num1 = " << " " << num1 << endl;
        cout << " num2 = " << " " << num2 << endl;
        cout << " num3 = " << " " << num3 << endl;
        cout << " num4 = " << " " << num4 << endl;
        cout << " num5 = " << " " << num5 << endl;
        cout << " num6 = " << " " << num6 << endl;
        cout << " num7 = " << " " << num7 << endl;
        cout << " num8 = " << " " << num8 << endl;
        cout << " num9 = " << " " << num9 << endl;

        i = i+1;
    }
    if(num0 < mini)
        {
            mini = num0;
        }
        if(num2 < mini)
        {
            mini = num2;
        }
        if(num3 < mini)
        {
            mini = num3;
        }
        if(num4 < mini)
        {
            mini = num4;
        }
        if(num5 < mini)
        {
            mini = num5;
        }
        if(num6 < mini)
        {
            mini = num6;
        }
        if(num7 < mini)
        {
            mini = num7;
        }
        if(num8 < mini)
        {
            mini = num8;
        }
        if(num9 < mini)
        {
            mini = num9;
        }



    if (num0==mini) fout << " 0";
    if (num1==mini) fout << " 1";
    if (num2==mini) fout << " 2";
    if (num3==mini) fout << " 3";
    if (num4==mini) fout << " 4";
    if (num5==mini) fout << " 5";
    if (num6==mini) fout << " 6";
    if (num7==mini) fout << " 7";
    if (num8==mini) fout << " 8";
    if (num9==mini) fout << " 9";




//    fout << ;
    return 0;
}
