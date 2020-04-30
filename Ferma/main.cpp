#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("frema.in");
ofstream fout("ferma.out");
int main()
{
    int n = 0;
    int i = 1;
    int s = 0;
    int nr_cusca = 0;
    int num = 0;
    int specia = 0;
    fin >> specia;
    int maxi = 0;
    int suma_masculi = 0;
    fin >> n;
    while(i <= n)
    { //Pentru fiecare numar
        fin >> nr_cusca;
        int nr_cusca_temp = nr_cusca;
        int rest_nr_cusca = 0;
        int nr_cusca_temp3 = nr_cusca;
        int nr_cusca_temp_2 = nr_cusca;
        int rest_nr_cusca_temp = 0;
        int prima_cif_nr_cusca = 0;
        int cifrele_lui_nr_cusca = 0;

        //prima cifra a lui nr_cusca
        prima_cif_nr_cusca = (nr_cusca_temp/1000)%10;
        //fout << prima_cif_nr_cusca << " ";
        //Gata prima cif a lui nr_cusca



        //Aflare restului lui nr_cusca
        int ultima_cif = 0;
        while(nr_cusca_temp_2 > 0)
        {
            cifrele_lui_nr_cusca = nr_cusca_temp_2%10;
            nr_cusca_temp_2 = nr_cusca_temp_2/10;

            rest_nr_cusca = rest_nr_cusca*10 + cifrele_lui_nr_cusca;

        }
        ultima_cif = nr_cusca%10;
        cout << "Ultima cif = " << ultima_cif << endl;

        //Aflare max
        if(ultima_cif >= maxi)
        {
            maxi = ultima_cif;
            num = 1;
        }
        else if(ultima_cif == maxi)
        {
            num = num+1;
        }


        else
        {
            maxi = maxi;
        }
        //Gata Algoritm
        rest_nr_cusca = rest_nr_cusca/10;
        //fout << "restul lui nr_cusca = " << rest_nr_cusca << endl;
        //Gata Algoritm de SUMA.




        //Inversarea lui rest_nr_cusca
        int rest_nr_cusca_inv = 0;
        int cif_rest_nr_cusca  = 0;
        while(rest_nr_cusca)
        {
            cif_rest_nr_cusca = rest_nr_cusca%10;
            rest_nr_cusca = rest_nr_cusca/10;
            rest_nr_cusca_inv = rest_nr_cusca_inv*10 + cif_rest_nr_cusca;
            s = s+cif_rest_nr_cusca;
        }
       // fout << "Rest_nr_cusca_inv = " << rest_nr_cusca_inv;
        //Gata algoritm





        //Suma masculi
        int cif_de_mijloc = 0;
        if(prima_cif_nr_cusca == specia)
        {
            cif_de_mijloc = (nr_cusca_temp3/100) % 10;
            suma_masculi = suma_masculi+cif_de_mijloc;
        }
        //Gata Algoritm.

        i = i+1;
    }

    fout << suma_masculi << endl << s << endl << maxi << endl << num << endl;
    return 0;
}
