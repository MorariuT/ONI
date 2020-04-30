#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("furnica.in");
ofstream fout("furnica.out");
int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        int n = 0; fin >> n;
        //int t = 0; cin >> t;
        int suma_o = 0;
        int suma_v = 0;
        int suma_c = 0;
        int suma_cm_2 = 0;
        int inaltime_curenta = 0;
        int orizontal = 0;
        int vertical = 0;
        int am_adunat = 0;
        int max = 0;

        int precedent = 0;
        for(int i = 0;i < n;i++)
        {
            fin >> orizontal >> vertical;
            if(suma_c == precedent) {}
            else
            {
                if(suma_cm_2 > max) max = suma_cm_2;
                suma_cm_2 = 0;
            }
            if(inaltime_curenta < vertical)
            {
                suma_v = suma_v+vertical-inaltime_curenta;
                suma_cm_2 += suma_v;
                inaltime_curenta = vertical;
            }
            else if(inaltime_curenta > vertical)
            {
                suma_c = suma_c+inaltime_curenta-vertical;
                inaltime_curenta = vertical;
            }
            suma_o = suma_o+orizontal;
            suma_cm_2 += suma_o;
            precedent = suma_c;
            //cout << "suma_c = " << suma_c << " suma_v = " << suma_v << " suma_o = " << suma_o << " orizontal = " << orizontal << " vertical = " << vertical << " inaltime_curenta = " << inaltime_curenta << endl;
        }
        //suma_v += nr_adunat;
        // cout << "suma_c = " << suma_c << " suma_v = " << suma_v << " suma_o = " << suma_o << endl;
        suma_c = suma_c+vertical;
        fout << suma_c*2+suma_v*5+suma_o*3;
    }
    if(cer == 2)
    {
        int n = 0; fin >> n;
        //int t = 0; cin >> t;
        int suma_o = 0;
        int suma_v = 0;
        int suma_c = 0;
        int suma_cm_2 = 0;
        int inaltime_curenta = 0;
        int orizontal = 0;
        int vertical = 0;
        int am_adunat = 0;
        int max = 0;

        int precedent = 0;
        for(int i = 0;i < n;i++)
        {
            fin >> orizontal >> vertical;


            if(inaltime_curenta < vertical)
            {
                suma_v = suma_v+vertical-inaltime_curenta;
                suma_cm_2 += suma_v;
                inaltime_curenta = vertical;
            }
            else if(inaltime_curenta > vertical)
            {
                suma_c = suma_c+inaltime_curenta-vertical;
                inaltime_curenta = vertical;
            }
            cout << "suma_cm_2 = " << suma_cm_2 << endl;
            cout << "suma_c = " << suma_c << " precedent = " << precedent << endl;
            if(precedent == suma_c)
            {
                if(max < suma_cm_2) max = suma_cm_2;
            }
            else
            {
                cout << "e_pe_else" << endl;
                if(max < suma_cm_2) max = suma_cm_2;
                suma_cm_2 = 0;
            }
            suma_o = suma_o+orizontal;
            suma_cm_2 += suma_o;
            precedent = suma_c;
           // cout << "suma_c = " << suma_c << " suma_v = " << suma_v << " suma_o = " << suma_o << " orizontal = " << orizontal << " vertical = " << vertical << " inaltime_curenta = " << inaltime_curenta << endl;
        }
        //suma_v += nr_adunat;
        // cout << "suma_c = " << suma_c << " suma_v = " << suma_v << " suma_o = " << suma_o << endl;
        //suma_c = suma_c+vertical;
        fout << max << endl;
       //fout << max;
    }
    if(cer == 3)
    {
        int n = 0; fin >> n;
        int nr_sec = 0; fin >> nr_sec;
        int suma_o = 0;
        int suma_v = 0;
        int suma_c = 0;
        int suma_cm_2 = 0;
        int inaltime_curenta = 0;
        int nr_sec_numarate = 0;
        int orizontal = 0;
        int vertical = 0;
        int am_adunat = 0;
        int max = 0;
        int precedent = 0;
        for(int i = 0;i < n;i++)
        {
            fin >> orizontal >> vertical;
            if(inaltime_curenta < vertical)
            {
                suma_v = suma_v+vertical-inaltime_curenta;
                suma_cm_2 += suma_v;
                inaltime_curenta = vertical;
            }
            else if(inaltime_curenta > vertical)
            {
                suma_c = suma_c+inaltime_curenta-vertical;
                inaltime_curenta = vertical;
            }
            suma_o = suma_o+orizontal;
            suma_cm_2 += suma_o;
            precedent = suma_c;
            nr_sec_numarate = suma_c*2+suma_v*5+suma_o*3;
            //cout << nr_sec_numarate << endl;
            if(nr_sec_numarate >= nr_sec)
            {
                fout << i+1;
                break;
            }
            //cout << "suma_c = " << suma_c << " suma_v = " << suma_v << " suma_o = " << suma_o << " orizontal = " << orizontal << " vertical = " << vertical << " inaltime_curenta = " << inaltime_curenta << endl;
        }
        //suma_v += nr_adunat;
        // cout << "suma_c = " << suma_c << " suma_v = " << suma_v << " suma_o = " << suma_o << endl;
        suma_c = suma_c+vertical;
        //fout << suma_c*2+suma_v*5+suma_o*3;
    }
   // cout << "Hello world!" << endl;
    return 0;
}
