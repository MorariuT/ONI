#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("forus.in");
ofstream fout("forus.out");
int main()
{
    int c = 0;
    fin >> c;
    if(c == 1)
    {
        int i = 1;
        int n = 0;
        int num = 0;
        int nr_citit = 0;
        fin >> n;
        while(i <= n)
        { //pentru fiecare nr.
            fin >> nr_citit;
            int cifre = 0;
            while(nr_citit > 0)
            { // Pentru fiecare cifra
                cifre = nr_citit%10;
                nr_citit = nr_citit/10;
                if(cifre == 0)
                {
                    break;
                }
            }
             if(cifre != 0)
             {
                num = num+1;
             }
            i = i+1;
        }
        fout << num;
    }




    if(c == 2)
    {
        int n = 0;
        fin >> n;
        int i = 1;
        int nr_citit = 0;
        //spec
        int nr_cifre = 0;
        //spec
        while(i <= n)
        { //pt fiecare nr
            fin >> nr_citit;
            int nr_temp = nr_citit;
            int nr_temp_2 = nr_citit;
            int num = 0;

            //1
            while(nr_citit > 0)
            {
                num = num+1;
                nr_citit = nr_citit/10;
            }



            //2
            int j = 1;
            int putere_10 = 1;
            while(j < num)
            {
                putere_10 = putere_10*10;
                j = j+1;
            }


            //3
            int ultima_cif = 0;
            int nr_final = 0;
            int mini = 99999999;
            int mini_nr = 0;
           // cout << nr_final;
            while(true)
            {
                int num_div = 0;
                int it = 1;
                ultima_cif = nr_temp%10;
                //rest nr
                nr_temp = nr_temp/10;
                nr_final = ultima_cif*putere_10+nr_temp;
                nr_temp = nr_final;
                while(it <= nr_final)
                {
                    if(nr_final % it == 0)
                    {
                        num_div = num_div+1;
                    }
                    it = it+1;
                }
                if(num_div < mini)
                {
                    mini = num_div;
                    mini_nr = nr_final;
                }
                if(nr_temp_2 == nr_final)
                {
                    break;
             }
            cout << mini_nr << endl;

            i = i+1;

        }
    }

    return 0;
}
