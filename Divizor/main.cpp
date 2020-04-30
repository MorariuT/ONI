#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("divizori.in");
ofstream fout("divizori.out");
int main()
{
    int num_cifre = 0;
    int n = 0;
    fin >> n;
    int n_temp = n;
    int n_temp_2 = n;
    int n_temp_3 = n;
    int n_temp_4 = n;
    int m = 0;
    //nr de cifre
    while(n_temp > 0)
    {
        num_cifre = num_cifre + 1;
        n_temp = n_temp/10;
    }


    //Ultima cifra
    int ultima_cif_n = 0;
    ultima_cif_n = n%10;




    //Noul n

    //cout << "Num cifre = " << num_cifre << endl;


    //Puterea lui 10
    int puterea_lui_10 = 1;
    int i = 1;
    while(i < num_cifre)
    {
        puterea_lui_10 = puterea_lui_10*10;
        i = i+1;
    }




    //Calcularea permutarii
    int ultima_cif_n_2 = 0;
    int numar_final = 0;
    int num_max = 0;
    int max = 0;
    while(true)
    {
        ultima_cif_n_2 = n_temp_3%10;
        int j = 1;
        int num_div = 0;
        n_temp_3 = n_temp_3/10;
        n_temp_2 = n_temp_2/10;
        numar_final = ultima_cif_n_2*puterea_lui_10+n_temp_2;
        n_temp_2 = numar_final;
        while(j <= numar_final)
        {
            if(numar_final % j == 0) num_div++;
            else num_div = num_div;
            j++;
        }
        if(num_div > max)
        {
            max = num_div;
            num_max = numar_final;
        }
        if(n_temp_4 == numar_final)
        {
            break;
        }

    }
    fout << num_max << endl;



    int y = 2;
    int raspuns = 0;
    int maxi = 0;
    while(y <= num_max-1)
    {
        if(num_max % y == 0) raspuns = y;
        if(maxi < raspuns) maxi = raspuns;
        y++;
    }
    fout << maxi;
    return 0;
}
