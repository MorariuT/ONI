#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream fin("prime1.in");
ofstream fout("prime1.out");
ifstream fin2("prime1.in");
int main()
{
    int c = 0; fin >> c; fin2 >> c;


    if(c == 1)
    {
        long long int n = 0; fin >> n;
        long long int i = 1;
        int num = 0;
        long long int nr_citit = 0;
        while(i <= n)
        {
            fin >> nr_citit;
            long long  int t1 = 1;
            long long int t2 = 1;
            long long int t3 = 0;
            while(true)
            {
                t3 = t1+t2;
                t1 = t2;
                t2 = t3;
                if(t1 == nr_citit)
                {
                    //cout << "DA" << endl;
                    int j = 2;
                    int am_gasit = 0;
                    while(j < nr_citit/2)
                    {
                        if(nr_citit%j == 0)
                        {
                            am_gasit = 1;
                      //a      cout << "nu e bun" << endl;
                        }
                        j++;
                    }
                    if(am_gasit == 0) num++;
                    break;
                }
                if(t1 > nr_citit)
                {
                    break;
                }
            }
            i++;
        }
        fout << num;
    }



    if(c == 2)
    {

    }


    if(c == 3)
    {
        long long int n = 0;
        fin >> n;
        fin2 >> n;


        long long int i = 1;
        long long int num = 0;
        long long int nr_citit = 0;
        int max = 0;
        while(i <= n)
        {
            fin >> nr_citit;
            if(nr_citit > max) max = nr_citit;
            i++;
        }



        i = 1;
        bool*v = new bool[max+1];
        long long int j = 0;
        while(j < max)
        {
            v[j] = 0;
            j++;
        }
        v[0] = 1;
        v[1] = 1;
      //  cout << "v[0] = " << v[0] << " v[1] = " << v[1] << endl;
        j = 2;
        while(j < sqrt(max))
        {
            if(v[j] == 0)
            {
                long long int h = 2;
                while(h <= max/j)
                {
                    v[h*j] =  1;
                    h++;
                }
            }
            j++;
        }
     //   cout << "max = " << max << endl;
        i = 0;
        while(i < n)
        {
            fin2 >> nr_citit;
       //     cout << v[i] << " i = " << i;
            //cout << " nr_citit = " << nr_citit << " ";
            int j = 2;
         //   if(nr_citit == 9) cout << "dif = " << nr_citit-i << endl;
            while(j <= nr_citit/2)
            {
                if(v[j]==0 && v[nr_citit-j] == 0)
                {
                   // cout << nr_citit << endl;
                    num++;
                    break;
                }
                j++;
            }
            i++;
        }
        fout << n-num;
    }
   // cout << "Hello world!" << endl;
    return 0;
}
