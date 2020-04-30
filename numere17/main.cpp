#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere17.in");
ofstream fout("numere17.out");
int main()
{

    int c = 0;
    fin >> c;
    if(c == 1)
    {
        int n = 0;
            fin >> n;
            int i = 1;
            int nr_citit = 0;
            int pozitite = 1;
            int raspuns_a = 0;
            while(i <= n)
            {
                fin >> nr_citit;
                int cif_curenta = 0;
                int j = 1;
                int primul_t = 1;
                while(j <= n)
                {
                    primul_t = primul_t + j;
                    j++;
                    raspuns_a = pozitite + primul_t;
                    //cout << endl << "primul_t = " << primul_t << endl;
                }
                if(nr_citit == 2) pozitite++;
                else if(nr_citit == 1) pozitite = pozitite;
                //cout << nr_citit << " pozitite = " << pozitite << endl;
                raspuns_a = primul_t + pozitite-1;
                i++;
            }
            fout << raspuns_a;

    }
        if(c == 2)
        {
            int k = 0;
            fin >> k;
           //er int i = 2;
            int ultim_t = 1;
           // int poz = 0;
            int nr_break = 0;
            int am_gasit = 0;
            int suma = 1;
            int pt = 1;
            int pu = 1;
            int j = 2;
            int l = 1;
            int poz = 0;
            int y = 1;
            int pt_2 = 0;
            int pu_2 = 1;
            int q = 2;
            int drum = 0;
            int suma_pu = 1;
            int i = 1;
            //int suma = 0;
            while(true)
            {
                pt = pt+i;
                i++;
                l++;
                pu = pu+j;
                //cout << "pu = " << pu << " pt = " << pt << " k = "<< k << endl;
                j++;
                //cout << "primul termen = " << pt << " ultimult termen = " << pu << " suma_pu = " << suma_pu << endl;
                if(pt <= k && pu >= k)
                {
                    poz = k-pt+1;
                    //cout << "poz = " << poz << endl;
                    //cout << "linia = " << l << " pozitia = " << poz << endl;
                    break;
                }
            }
            int lc = 1;
            int t = 2;
            int dif = 1;
            int num_break = 0;
            while(true)
            {
                pu_2 = pu_2+t;
                t++;
                //cout << "l = " << l << endl;
                if(lc < poz)
                {
                    suma_pu  = suma_pu+pu_2;
                    //cout << "suma = " << suma_pu << " pu = " << pu_2 << endl;
                }
                else
                {
                    suma_pu = suma_pu+(pu_2-dif);
                    int d = pu_2-dif;
                    //cout << "suma = " << suma_pu << " pu_2-dif = " << d << endl;
                    dif++;
                }

                lc++;
                if(lc == l) break;
            }
                fout << suma_pu << endl;
            return 0;
        }
    }
