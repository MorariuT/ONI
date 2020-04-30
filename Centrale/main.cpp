#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("centrale.in");
ofstream fout("centrale.out");
int main()
{
    int n = 0;
    long long  int num = 0;
    fin >> n;
    long long int i = 1;
    long long int nr_citiit = 0;
    while(i <= n)
    {
        fin >> nr_citiit;
        long long int nr_citiit2 = nr_citiit;
        int nr_fara_cif_fata = 0;
        long long int nr_fara_cif_fata_spate = 0;
        int nr_fara_cif_spate = 0;
        int prima_cif = 0;
        long long int num_cif = 0;
        int ultima_cif = nr_citiit%10;
        long long int j = 1;
        long long int putere_10 = 1;
        while(nr_citiit > 0)
        {
            num_cif++;
            nr_citiit = nr_citiit/10;
        }
        while(j <= num_cif-1)
        {
            putere_10 = putere_10*10;
            j++;
        }
        cout << "putere_10 = " << putere_10 << endl;
        nr_fara_cif_fata_spate = (nr_citiit2%putere_10)/10;
        //cout << "nr_fara_cif_fata = " << nr_fara_cif_fata << endl;
        //cout << "nr_fara_cif_spate = " << nr_fara_cif_spate << endl;
        cout << "nr_fara_cif_fata_spate = " << nr_fara_cif_fata_spate << endl;
        int cifre_fata_spate = 0;
        int am_gasit = 0;
        int am_intrat = 1;
        long long int cifre_fata_spate_p = nr_fara_cif_fata_spate%10;
        cout << "ultima cif = " << cifre_fata_spate_p << endl;
        while(nr_fara_cif_fata_spate)
        {
            cifre_fata_spate = nr_fara_cif_fata_spate%10;
            nr_fara_cif_fata_spate = nr_fara_cif_fata_spate/10;
            if(cifre_fata_spate != cifre_fata_spate_p)
            {
                am_gasit = 1;
                break;
            }
        }
        if(am_gasit == 0) num++;
        i++;
    }
    fout << num << endl;
    return 0;
}
