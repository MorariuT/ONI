#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sir5.in");
ofstream fout("sir5.out");
int main()
{
    int k,x,a,b;
    fin >> k >> x >> a >> b;
    int nr_de_cif = 0;
    int i = 1;
    int num = 0;
    int s = 0;
    while(i <= k)
    {
        int j = 1;
        int nr = 0;
        while(j <= i)
        {
            nr = nr*10+j;
            j = j+1;
        }
        int nr_temp = nr;
        int nr_temp_2 = nr;
        int nr_temp_4 = nr;
        int nr_temp_3 = nr;
        //cout << " nr = " << nr << endl;
        //1
        int num_cif = 0;
        while(nr > 0)
        {
            num_cif = num_cif+1;
            nr = nr/10;
        }



        //2
        int puterea_lui_10 = 1;
        int t = 1;
        while(t < num_cif)
        {
            puterea_lui_10 = puterea_lui_10*10;
            //cout << puterea_lui_10 << endl;
            t = t+1;
        }



        //3
        int u = 0;
        int nr_nou = 0;
        int cifra_nr = 0;
       // cout << "Nr temp 3 = " << nr_temp_3;

        while(true)
        {
            u = nr_temp_3%10;
            //cout << "U = " << u << endl;
           // cout << "Nr temp 3 = " << nr_temp_3 << endl;
            nr_temp_3 = nr_temp_3/10;
            cout << "temp 3 = " << nr_temp_3 << endl;


            nr_nou = puterea_lui_10*u+nr_temp_3;
            nr_temp_3 = nr_nou;
            s = s+nr_nou;
            cout << "nr temp 3 = " << nr_temp_3 << " " << endl;
            int nr_nou_temp = nr_nou;
            //prima cifra
            int prima_cifra = 0;
            while(nr_nou_temp > 10)
            {
                prima_cifra = nr_nou_temp/10;
                nr_nou_temp = nr_nou_temp/10;
            }


            // cifrele
            int am_gasit = 0;
            int nr_nou_temp_2 = nr_nou;
            int cifrele_nr_nou = 0;
            while(nr_nou_temp_2 > 0)
            {
                cifrele_nr_nou = nr_nou_temp_2%10;
                nr_nou_temp_2 = nr_nou_temp_2/10;
                if(cifrele_nr_nou == b)
                {
                    am_gasit = 1;
                }
            }


            cout << nr_nou << " prima_cifra=" << prima_cifra <<" a=" <<a << " am gasit=" << am_gasit<< endl;
            if (prima_cifra==a && am_gasit==0){
                num = num + 1;

            }

            if(nr_temp_4 == nr_nou)
            {
                break;
            }
        }

        i = i+1;
    }

    fout << s%10 << endl;




    ///////////////////////////////////////////////////////2
    int prima_cif = 0;
    int ultima_cif = 0;
    int x_temp = x;
    while(x > 10)
    {
        prima_cif = x/10;
        x = x/10;
    }
    ultima_cif = x_temp%10;
    int cifre = 0;
    int numar = 0;
    while(x_temp > 0)
    {
        cifre = x_temp%10;
        x_temp = x_temp/10;
        numar = numar*10+cifre;
    }
    numar = numar/10;
    int numar_inv = 0;
    int cifre_nr_inv = 0;
    while(numar > 0)
    {
        cifre_nr_inv = numar%10;
        numar = numar/10;
        numar_inv = numar_inv*10+cifre_nr_inv;
    }
    numar_inv = numar_inv*10+prima_cif;
    fout << numar_inv << endl;



////////////////////////////////////////////////////////3




                  fout << num << endl;


    return 0;

}
