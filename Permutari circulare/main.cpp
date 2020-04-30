#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("permutari cir.in");
ofstream fout("permutari cir.out");
int main()
{
    int num_cifre = 0;
    int n = 0;
    cin >> n;
    int n_temp = n;
    int n_temp_2 = n;
    int n_temp_3 = n;
    int n_temp_4 = n;


    //nr de cifre
    while(n_temp > 0)
    {
        num_cifre++;
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
    cout<< puterea_lui_10 << endl;



    //Calcularea permutarii
    int ultima_cif_n_2 = 0;
    int numar_final = 0;
    while(true)
    {

        ultima_cif_n_2 = n_temp_3%10;
        //cout << "ultima cif = " << ultima_cif_n_2 << endl;
        n_temp_3 = n_temp_3/10;
        n_temp_2 = n_temp_2/10;
        numar_final = ultima_cif_n_2*puterea_lui_10+n_temp_2;
        n_temp_2 = numar_final;
        if(n_temp_4 == numar_final)
        {
            break;
        }
        cout << numar_final << endl;
    }
    return 0;
}
