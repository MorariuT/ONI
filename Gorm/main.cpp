#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("gorm.in");
ofstream fout("gorm.out");
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,p1,p2,p3,p4,p5,p6,p7,p8,p9;
    int nr1 = 0;
    int nr2 = 0;
    int nr3 = 0;
    int nr4 = 0;
    fin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9;
    fin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 >> p7 >> p8 >> p9;
    if (a1%2==0)
    {
        nr1 = nr1*10+a1;
    }
    else
    {
        nr2 = nr2*10+a1;
    }


    if (a2%2==0)
    {
        nr1 = nr1*10+a2;
    }
    else
    {
        nr2 = nr2*10+a2;
    }

    if (a3%2==0)
    {
        nr1 = nr1*10+a3;
    }
    else
    {
        nr2 = nr2*10+a3;
    }

    if (a4%2==0)
    {
        nr1 = nr1*10+a4;
    }
    else
    {
        nr2 = nr2*10+a4;
    }

    if (a5%2==0)
    {
        nr1 = nr1*10+a5;
    }
    else
    {
        nr2 = nr2*10+a5;
    }

    if (a6%2==0)
    {
        nr1 = nr1*10+a6;
    }
    else
    {
        nr2 = nr2*10+a6;
    }

    if (a7%2==0)
    {
        nr1 = nr1*10+a7;
    }
    else
    {
        nr2 = nr2*10+a7;
    }

    if (a8%2==0)
    {
        nr1 = nr1*10+a8;
    }
    else
    {
        nr2 = nr2*10+a8;
    }

    if (a9%2==0)
    {
        nr1 = nr1*10+a9;
    }
    else
    {
        nr2 = nr2*10+a9;
    }
    if (p1%2==0)
    {
        nr3 = nr3*10+p1;
    }
    else
    {
        nr4 = nr4*10+p1;
    }

    if (p2%2==0)
    {
        nr3 = nr3*10+p2;
    }
    else
    {
        nr4 = nr4*10+p2;
    }


    if (p3%2==0)
    {
        nr3 = nr3*10+p3;
    }
    else
    {
        nr4 = nr4*10+p3;
    }



    if (p4%2==0)
    {
        nr3 = nr3*10+p4;
    }
    else
    {
        nr4 = nr4*10+p4;
    }


    if (p5%2==0)
    {
        nr3 = nr3*10+p5;
    }
    else
    {
        nr4 = nr4*10+p5;
    }


    if (p6%2==0)
    {
        nr3 = nr3*10+p6;
    }
    else
    {
        nr4 = nr4*10+p6;
    }


    if (p7%2==0)
    {
        nr3 = nr3*10+p7;
    }
    else
    {
        nr4 = nr4*10+p7;
    }


    if (p8%2==0)
    {
        nr3 = nr3*10+p8;
    }
    else
    {
        nr4 = nr4*10+p8;
    }


    if (p9%2==0)
    {
        nr3 = nr3*10+p9;
    }
    else
    {
        nr4 = nr4*10+p9;
    }




    if (nr1 > nr3 && nr1 > nr4 || nr2 > nr3 && nr2 > nr4)
    {
        fout << "tribul de apa";
    }
    if (nr3 > nr1 && nr3 > nr2 || nr4 > nr1 && nr4 > nr2)
    {
        fout << "tribul de pamant";
    }

    if (nr1 == nr3 && nr2 == nr4)
    {
        fout << "nu exista castigator";
    }
    cout <<  " nr1 = " << nr1 << endl;
    cout <<  " nr2 = " << nr2 << endl;
    cout <<  " nr3 = " << nr3 << endl;
    cout <<  " nr4 = " << nr4 << endl;
    return 0;
}
