#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("aur.in");
ofstream fout("aur.out");
int main()
{
    //Cerinta 1
    int c = 0;
    fin >> c;
    if(c == 1)
    {
        int n = 0;
        int i = 1;
        int nr_citit = 0;
        int num = 0;
        fin >> n;
        while(i <= n)
        {
            fin >> nr_citit;

            while(nr_citit > 0)
            {
                num = num+1;
                nr_citit = nr_citit/10;
            }
            i = i+1;
        }
        fout << num;
    }






   else if(c == 2)
    {
        int k = 0;
        int n = 0;
        int num = -1;
        fin >> n >> k;
        int nr_citit = 0;
        int i = 1;
        while(i <= n)
        {
            fin >> nr_citit;
            int c  = 0;
            while(nr_citit > 0)
            {
                c = nr_citit%10;
                cout << "C = " << c << endl;
                num = num+1;
                nr_citit = nr_citit/10;
                if(num == k)
                {
                    fout << c;
                    break;
                }
            }
            i = i+1;
        }
    }




   else if(c == 3)
    {
        int lungime_lista = 9999;
        int n  = 0;
        int p = 0;
        fin << n << p;
        int termen_lista = 0;
        int l[lungime_lista];
        int i = 1;
        int d = n-p
        int s = i+p;
        //while(i <= n)
        //{
            fin >> l[i];
            cout << l[i] << " ";
            int j = 1;
            int numar = 0;
            while(j <= i)
            {
                numar = numar*10+l[i];
            }
            cout << numar << endl;
            i = i+1;

       // }



    }
    return 0;
}
