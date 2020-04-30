#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cheia.in");
ofstream fout("cheia.out");
int main()
{
    int n = 0;
    fin >> n;
    int cod_sursa = 0;
    int aparitii_max = 0;
    int c_max = 0;
    int cod_utilizator = 0;
    int corecte = 0 ;
    int incorecte = 0;
     int cheie_ultim_utilizator = 0;

    fin >> cod_sursa;
    int  i = 1;
    while(i <= n)
    {//fiecaqre cheie de acces

        int cif_com = 0;
        int cif2_com = 0;
        fin >> cod_utilizator;
        int cate_cifre_comune = 0;

        int j = 1;
        // cout << "cod utilizator = " << cod_utilizator1 << endl;;

        while(j <= 9)
        {   //Pentru fiecare nr

            int num1 = 0;
            int num2 = 0;
            int c = 0;
            int c1 = 0;
            int cod_sursa1 = cod_sursa;
            int cod_utilizator1 = cod_utilizator;

            //cout << "j = " << j << endl;
            while(cod_sursa1 > 0)
            {
                c = cod_sursa1%10;
                cod_sursa1 = cod_sursa1/10;
               //cout << "Cod sursa = " << cod_sursa1;
                if (c == j)
                {
                    num1 = num1+1;
                }
            }
            while(cod_utilizator1 > 0)
            {
                c1 = cod_utilizator1%10;
                cod_utilizator1 = cod_utilizator1/10;


                if (c1 == j)
                {
                    num2 = num2+1;
               // cout << "num 2 = " << num2;
                }

            }


            if(num1 > 0 && num2 > 0)
            {

                if (cate_cifre_comune==0){
                    cheie_ultim_utilizator = 0;
                }


                cate_cifre_comune = cate_cifre_comune + 1;

                cheie_ultim_utilizator = cheie_ultim_utilizator*10+j;


                /*
                int aparitii = 0;
                if(num1 > num2)
                {
                    aparitii = num1;
                }
                else
                {
                    aparitii = num2;
                }
                if(aparitii > aparitii_max)
                {
                    aparitii_max = aparitii;
                    c_max = i;
                }
                */
            }
            j = j+1;
        }
        cout << "cod sursa :" << cod_sursa << "  numar:" << cod_utilizator << " cifre comune :" << cate_cifre_comune << endl;

        //
        if (cate_cifre_comune>0){
            corecte = corecte + 1;
        } else{
            incorecte = incorecte + 1;
        }


        i = i+1;
    }


    fout << incorecte << endl << cheie_ultim_utilizator;
 ;
    return 0;
}
