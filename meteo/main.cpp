#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("meteo.in");
ofstream fout("meteo.out");
ifstream fin2("meteo.in");
int main()
{
    int n  = 0; fin >> n; fin2 >> n;
    int i = 2;
    int temperatura_zi = 0;
    int precedent = 0;
    int lungime_secventa = 1;
    int max_secventa = 0;
    int pozitie_secventa = 0;
    int am_intrat = 0;
    fin >> precedent;
    while(i <= n)
    {
        //cout << "#####################################################" << endl;
        fin >> temperatura_zi;
        if(precedent >= 0 && temperatura_zi < 0)
        {
            lungime_secventa++;
        }
        else if(precedent < 0 && temperatura_zi >= 0)
        {
            lungime_secventa++;
        }
        else if(precedent >= 0 && temperatura_zi >= 0)
        {
            if(max_secventa <= lungime_secventa)
            {
                max_secventa = lungime_secventa;
                pozitie_secventa = i;
            }
            lungime_secventa = 1;
        }
        else if(precedent < 0 && temperatura_zi < 0)
        {
            if(max_secventa <= lungime_secventa)
            {
                max_secventa = lungime_secventa;
                pozitie_secventa = i;
            }
            lungime_secventa = 1;
        }

        precedent = temperatura_zi;
        /*
        cout << "precedent = " << precedent << endl;
        cout << "temperatura = " << temperatura_zi << endl;
        cout << "pozitite_secventa = " << pozitie_secventa << endl;
        cout << "lungime secventa = " << lungime_secventa << endl;
        cout << "lungime max = " << max_secventa << endl;
        */
        i++;
    }
    //cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$max secventa = " << max_secventa << endl;
    //cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$lungime secventa = " << lungime_secventa << endl;
    if(max_secventa <= lungime_secventa)
    {
        max_secventa = lungime_secventa;
        pozitie_secventa = i;
    }
    fout << max_secventa << endl;
    //cout << "%%%%%%%%%%%%%%%%%%%%pozitite sec = " << pozitie_secventa << endl;
    i = 1;
    //fin2 >> precedent;
    while(i <= n)
    {
        fin2 >> temperatura_zi;

        if(i >= pozitie_secventa-max_secventa && i < pozitie_secventa)
        {
            fout << temperatura_zi << " " ;
          //  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ temperaura/zi = " << temperatura_zi << endl;
        }
        i++;
    }
    return 0;
}
