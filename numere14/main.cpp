#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere14.in");
ofstream fout("numere14.out");
int main()
{
    int cm1 = 0;
    int cm2 = 0;
    int cm3 = 0;
    int cm4 = 0;
    int cm5 = 0;
    int suma = 0;
    long long int n = 0; fin >> n;
    int i = 1;
    long long int nr_citit = 0;
    while(i <= n)
    {
        int num = 0;
        fin >> nr_citit;
        int nr_citit2 = nr_citit;
        while(nr_citit2)
        {
            num++;
            nr_citit2 = nr_citit2/10;
        }
        if(num == 1)
        {
            cm1 = nr_citit;
            if(cm1 % 2 == 1)
            {
                suma += cm1;
            }
        }
        if(num == 3)
        {
            cm2 = (nr_citit/10)%10;
            if(cm2 % 2 == 1)
            {
                suma += cm2;
            }
        }
        if(num == 5)
        {
            cm3 = (nr_citit/100)%10;
            if(cm3 % 2 == 1)
            {
                suma += cm3;
            }
        }
        if(num == 7)
        {
            cm4 = (nr_citit/1000)%10;
            if(cm4 % 2 == 1)
            {
                suma += cm4;
            }
        }
        if(num == 9)
        {
            cm5 = (nr_citit/10000)%10;
            if(cm5 % 2 == 1)
            {
                suma += cm5;
            }
        }
        i++;
    }
    fout << suma << endl;
    return 0;
}
