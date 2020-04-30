#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("covid-19.in");
ofstream fout("covid-19.out");
int main()
{
    int ziua_curenta = 0,luna_curenta = 0,anul_curent = 0,min_curent = 0,ora_curenta = 0;
    fin >> ziua_curenta >> luna_curenta >> anul_curent >> ora_curenta >> min_curent;
    //cout << ziua_curenta << " " << luna_curenta << " " << anul_curent << " " << min_curent << " " << ora_curenta << endl;
    int nr_de_contacte = 0;
    int nr_sec_totale_din_data_curenta = 0;
    long long int suma_sec_luna_c = 0;
    int max_sec = 0;
    fin >> nr_de_contacte;
  //  cout << nr_de_contacte << endl;
    int ziua_intalnirii = 0,luna_inatlnirii = 0,anul_intalnirii = 0,min_intalnirii = 0,ora_intalnirii = 0;
    if(luna_curenta == 1)
    {
        suma_sec_luna_c = 31*86400;
    }
    if(luna_curenta == 2)
    {
        suma_sec_luna_c = 29*86400+31*86400;
    }
    if(luna_curenta == 3)
    {
        suma_sec_luna_c = 31*86400+29*86400+31*86400;
    }
    if(luna_curenta == 4)
    {
        suma_sec_luna_c = 30*86400+31*86400+29*86400+31*86400;
    }
    if(luna_curenta == 5)
    {
        suma_sec_luna_c = 31*86400+31*86400+30*86400+29*86400+31*86400;
    }
    if(luna_curenta == 6)
    {
        suma_sec_luna_c = 30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
    }
    if(luna_curenta == 7)
    {
        suma_sec_luna_c = 31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
    }
    if(luna_curenta == 8)
    {
        suma_sec_luna_c = 31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
    }
    if(luna_curenta == 9)
    {
        suma_sec_luna_c = 30*86400+31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
    }
    if(luna_curenta == 10)
    {
        suma_sec_luna_c = 31*86400+30*86400+31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
    }
    if(luna_curenta == 11)
    {
        suma_sec_luna_c = 30*86400+31*86400+30*86400+31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
    }
    if(luna_curenta == 12)
    {
        suma_sec_luna_c = 31*86400+30*86400+31*86400+30*86400+31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
    }
    int sec_in_14 = 1209600;
    int index = 0;
    //cout << suma_sec_luna_c << endl;
    long long int nr_sec_curenta = (ziua_curenta-1) * 86400 + ora_curenta*3600 + min_curent*60 + suma_sec_luna_c;
    //cout << nr_sec_curenta << endl;
    for(int i = 1;i <= nr_de_contacte;i++)
    {
        int suma_sec_luna = 0;
        int suma_sec_zii = 0;
        fin >> ziua_intalnirii >> luna_inatlnirii >> anul_intalnirii >> ora_intalnirii >> min_intalnirii;
        //cout << ziua_intalnirii << " " << luna_inatlnirii << " " << anul_intalnirii << " " << min_intalnirii << " " << ora_intalnirii << endl;
        if(luna_inatlnirii == 1)
        {
            suma_sec_luna = 31*86400;
        }
        if(luna_inatlnirii == 2)
        {
            suma_sec_luna = 29*86400+31*86400;
        }
        if(luna_inatlnirii == 3)
        {
            suma_sec_luna = 31*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 4)
        {
            suma_sec_luna = 30*86400+31*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 5)
        {
            suma_sec_luna = 31*86400+31*86400+30*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 6)
        {
            suma_sec_luna = 30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 7)
        {
            suma_sec_luna = 31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 8)
        {
            suma_sec_luna = 31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 9)
        {
            suma_sec_luna = 30*86400+31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 10)
        {
            suma_sec_luna = 31*86400+30*86400+31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 11)
        {
            suma_sec_luna = 30*86400+31*86400+30*86400+31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
        }
        if(luna_inatlnirii == 12)
        {
            suma_sec_luna = 31*86400+30*86400+31*86400+30*86400+31*86400+31*86400+30*86400+31*86400+31*86400+30*86400+29*86400+31*86400;
        }
        suma_sec_zii = (ziua_intalnirii-1) * 86400 + ora_intalnirii*3600 + min_intalnirii*60;
        int nr_sec_intalnire = suma_sec_zii+suma_sec_luna;
        nr_sec_intalnire += sec_in_14;
        if(suma_sec_zii > max_sec) max_sec = nr_sec_intalnire;
        if(nr_sec_intalnire+sec_in_14 > nr_sec_curenta+sec_in_14)
        {
            fout << i << " ";
        }
        cout << nr_sec_intalnire << " " << nr_sec_curenta << endl;
    }
    cout << max_sec << endl;
    if(max_sec > nr_sec_curenta && (max_sec-nr_sec_curenta)/86400 > 1)
    {
        fout << endl << (max_sec-nr_sec_curenta)/86400 << " " << ((max_sec-nr_sec_curenta)%86400)/3600 << " " << (((max_sec-nr_sec_curenta)%86400)%3600)/60 << endl;
    }
    else if(max_sec > nr_sec_curenta && (max_sec-nr_sec_curenta)/86400 == 1)
    {
        fout << endl << (max_sec-nr_sec_curenta)/86400-1 << " " << ((max_sec-nr_sec_curenta)%86400)/3600 << " " << (((max_sec-nr_sec_curenta)%86400)%3600)/60 << endl;
    }
    else if(max_sec <= nr_sec_curenta) fout << "OK." << endl;
    return 0;
}
