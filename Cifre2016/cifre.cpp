
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifre2016.in");
ofstream fout("cifre2016.out");
int main()
{
    int n = 0;
    int i = 1;
    int p = 1;
    int mini = 999999;
    int nr_citit = 0;
    fin >> n;
    while(i <= n)
    {
        fin >> nr_citit;
        p = p*nr_citit;
        int ultimele_cifre_p = 0;
        int p_temp = p;

        i = i+1;
    }
     int ultimele_cifre_p = 0;
    int p_temp = p;
    int num = 0;
    while(p_temp > 0)
        {
            ultimele_cifre_p = p_temp%10;
            if(ultimele_cifre_p == 0)
            {
                num = num+1;
            }
            else if(ultimele_cifre_p != 0)
            {
                num = num;
                fout << num << " " << ultimele_cifre_p;
                break;
            }


            p_temp = p_temp/10;
        }
    //fout << num << " ";


    return 0;
}
