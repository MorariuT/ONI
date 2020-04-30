#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pozne.in");
ofstream fout("pozne.out");
int main()
{
    int c = 0;
    fin >> c;
    if(c == 1)
    {
        int n,s,h;
        fin >> n >> s >> h;
        int nr_citit = 0;
        int i = 1;
        while(i <= n)
        {
            fin >> nr_citit;
            int nr_citit2 = nr_citit;
            int j = 2;
            int d = nr_citit - 1;
            int am_gasit = 0;
            int cifre = 0;
            while(nr_citit > 0)
            {
                cifre = nr_citit%10;
                nr_citit = nr_citit/10;
                if(cifre == h)
                {
                    am_gasit = 1;
                }
            }
            if(am_gasit == 1)
            {
                fout << nr_citit2 << " ";
            }
            i++;
        }
    }











    if(c == 2)
    {
        int n,s,h;
        int am_gasit_2 = 0;
        int suma_prm = 0;
        int am_gasit_3= 0;
        int num = 0;
        int num_2 = 0;
        fin >> n >> s >> h;
        int suma_15 = 0;
        int suma = 0;
        int nr_citit = 0;
        int i = 1;
        int num_3 = 0;
        while(i <= n)
        {
            fin >> nr_citit;
            int nr_citit2 = nr_citit;
            int cifra = 0;
            suma = suma+nr_citit;
            int nr_nou = 0;
            while(nr_citit > 0)
            {
                cifra = nr_citit%10;
                nr_citit = nr_citit/10;
                nr_nou = nr_nou*10+cifra;
            }

            cout << "nr_nou = " << nr_nou << endl;
            int j = 2;
            int d = nr_nou - 1;
            int am_gasit = 0;
            int cifre = 0;
            while(j <= d)
            {
                if(nr_nou % j != 0)
                {
                    am_gasit = 1;
                }
                else
                {
                    am_gasit = 0;
                    break;
                }
                j++;
            }
            int cifre_2 = 0;
            if(am_gasit == 1)
            {
                num++;
                cout << nr_citit2 << " E prim" << endl;

            }
            if(am_gasit == 1)
            {
                    am_gasit_2 = 0;
                int nr_citit3 = nr_citit2;
                while(nr_citit2 > 0)
                {
                    cifre_2  = nr_citit2%10;
                    nr_citit2 = nr_citit2/10;
                    cout << "cifre_2 = " << cifre_2 << " nr_citit2 = " << nr_citit2 << " h = " << h << endl;
                    if(cifre_2 == h)
                    {
                        am_gasit_2 = 1;
                        break;

                    }
                }
                if(am_gasit_2 == 1)
                {
                     //cate s-or scazut
                    num_2++;
                    cout << "numar = " << nr_citit3 << " se scade  la suma " << s << endl;
                    suma_15 = suma_15+s;
                }
                else
                {
                    num_3++; //aduna
                    cout << "numar = " << nr_citit3 << " se  aduna suma " << s << endl;
                    suma_15 = suma_15+s;
                }
            }

            i++;
        }
        cout<< "num_3 = " << num_3 << " num_2 = " << num_2 <<endl;
        suma_15= suma_prm;
        suma_prm = suma_prm+s*num_3-s*num_2;
        cout << "suma_prm = " << suma_prm << endl;
        cout << "suma = " << suma << endl;
        fout << num << " ";
        if(suma_15 > suma_prm) fout << "-1";
        else if(suma_15 == suma_prm) fout << "0";
        else if(suma_15 < suma_prm) fout << "1";
    }
   // cout << "Hello world!" << endl;
    return 0;
}
