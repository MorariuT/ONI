#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("");
ofstream fout("");
int main()
{
    int n,k; cin >> n >> k;
    int i = 1;
    int n2 = n;
    int pereche = 0;
    int g1;
    int c1,c2;//,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15;
    int nr1;//,nr2,nr3,nr4,nr5,nr6,nr7,nr8,nr9;
    int num = 0;
    int cif_max = 0;
    int suma = 0;
    int nr_nou_inv = 0;

    while(i <= k)
    {
        //PARTE INTERESANTA
     //   cout << "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR" << endl;
        int fiecare_cifra = 0;
        int nr_cif = 0;
        int put_10 = 1;
        while(n2)
        {
            put_10 = put_10*10;
            n2 = n2/10;
        }
        put_10 = put_10/10;
       // cout << put_10 << endl;
        int nr_nou = 0;
        int nr_construit = 0;
        int cifre = 0;
        int cifre_2 = 0;
        while(put_10 >= 10)
        {
            c1 = (n/put_10)%10;
            put_10 = put_10/10;
            c2 = (n/put_10)%10;
        //    cout << "put_10 = " << put_10 << " c1 = " << c1 << " c2 = " << c2 << endl;
           // c1 = g1%10;
            //c2 = (g1/10)%10;
            if(c1 >= c2)
            {
                fiecare_cifra = c1-c2;
            }
            else if(c2 >= c1)
            {
                fiecare_cifra = c2-c1;
            }
           // if(c1 == 0 || c2 == 0) break;
      //      cout << "grup = " << c1 << c2 << " din care cif max = " << cif_max << " si n = " << n << " fiercare cifra a nr_ului = " << fiecare_cifra <<  endl;
           // n = n/10;
           nr_construit = nr_construit*10+fiecare_cifra;
         //   cout << "##########################   " << nr_construit << endl;
        }
        //cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ " << nr_nou << endl;
        n = nr_construit;
        n2 = n;
        //cout << "n nou = " << n << endl;
        suma += nr_construit;
        i++;
    }
    cout << suma << endl;
    return 0;
}
