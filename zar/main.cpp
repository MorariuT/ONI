#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zar.in");
ofstream fout("zar.out");
int main()
{
    int a,d,m;
    int i = 1;
    int maxi = 0;
    int mini = 67;
    int max2 = 0;
    int n = 4;
    int x = 0;
    int z1,z2,z3,z4,z5,z6,z7,z8,z9,z10,z11,z12,z13,z14,z15,z16,z17,z18,z19,z20,z21,z22,z23,z24;
    int y = 0;
    fin >> m;
    if(m == 1)
    {
        int n = 0;
        fin >> z1 >> z2 >> z3 >> z4 >> z5 >> z6;
        fin >> z7 >> z8 >> z9 >> z10 >> z11>> z12;
        fin >> z13 >> z14 >> z15 >> z16 >> z17 >> z18;
        fin >> z19 >> z20 >> z21 >> z22 >> z23 >> z24;
        cout << z1 << z2 << z3 << z4 << z5 << z6;

      //  while(i <= n)
        //{
            if(z1 > maxi)
            {
                maxi = z1;
            }
            if(z2 > maxi)
            {
                maxi = z2;
            }
            if(z3 > maxi)
            {
                maxi = z3;
            }
            if(z4 > maxi)
            {
                maxi = z4;
            }
            if(z5 > maxi)
            {
                maxi = z5;
            }
            if(z6 > maxi)
            {
                maxi = z6;
            }

            cout << maxi;
            if(z1 < mini)
            {
                mini = z1;
            }
            if(z2 < mini)
            {
                mini = z2;
            }
            if(z3 < mini)
            {
                mini = z3;
            }
            if(z4 < mini)
            {
                mini = z4;
            }
            if(z5 < mini)
            {
                mini = z5;
            }
            if(z6 < mini)
            {
                mini = z6;
            }
             x = (x+mini)*10+maxi;
               cout << "x = " << x << endl;
            int x2 = 0;
            if(z7 > maxi)
            {
                maxi = z7;
            }
            if(z8 > maxi)
            {
                maxi = z8;
            }
            if(z9 > maxi)
            {
                maxi = z9;
            }
            if(z10 > maxi)
            {
                maxi = z10;
            }
            if(z11 > maxi)
            {
                maxi = z11;
            }

            if(z12 > maxi)
            {
                maxi = z12;


            }

            if(z7 < mini)
            {
                mini = z7;
            }
            if(z8 < mini)

            {
                mini = z8;
            }
            if(z9 < mini)
            {
                mini = z9;
            }
            if(z10 < mini)
            {
                mini = z10;
            }
            if(z11 < mini)
            {
                mini = z11;
            }

            if(z12 < mini)
            {
                mini = z12;
            }
                x2 = (x2+mini)*10+maxi;
               fout << x2 << endl;
                cout << "x2 = " << x2 << endl;

            //cout << maxi;
            if(z13 < mini)
            {
                mini = z13;
            }
            if(z14 < mini)
            {
                mini = z14;
            }
            if(z15 < mini)
            {
                mini = z15;
            }
            if(z16 < mini)
            {
                mini = z16;
            }
            if(z17 < mini)
            {
                mini = z17;
            }

            if(z13 < maxi)
            {
                maxi = z13;
            }
            if(z14 < maxi)
            {
                maxi = z14;
            }
            if(z15 < maxi)
            {
                maxi = z15;
            }
            if(z16 < maxi)
            {
                maxi = z16;
            }
            if(z17 < maxi)
            {
                maxi = z17;

            x = (x+mini)*10+maxi;
               fout << x << " ";
            if(z18 < mini)
            {
                mini = z18;
            }
            if(z19 > maxi)
            {
                maxi = z19;
            }
            if(z20 > maxi)
            {
                maxi = z20;
            }
            if(z21 > maxi)
            {
                maxi = z21;
            }
            if(z22 > maxi)
            {
                maxi = z22;
            }
            if(z23 > maxi)
            {
                maxi = z23;
            }
            if(z24 > maxi)
            {
                maxi = z24;
            }


               i = i+1;
               x = (x+mini)*10+maxi;
               fout << x;
    }
    return 0;
    }

    //}


   // cout << "Hello world!" << endl;


