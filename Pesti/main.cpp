#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("peste.in");
ofstream fout("peste.out");
int main()
{
    char p = 0;
    int greutate_p_initial = 0;
    int greutate_p_crestere_zii = 0;
    int n = 0; fin >> n;
    int greutate_minima = 0; fin >> greutate_minima;
    int zile = 0; fin >> zile;
    int i = 1;
    int saptamani = zile/7;
    int dif_zile =  zile-(saptamani*7);
    int g_g = 0;
    //cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%DIF_ZIL = " << dif_zile << endl;
    while(i <= n)
    { //pt fiecare peste
        fin >> p >> greutate_p_initial >> greutate_p_crestere_zii;
   //     cout << "p = " << p << " greutate_p_initial = " << greutate_p_initial << " greutate_p_crestere_zii = " << greutate_p_crestere_zii << endl;
        int suma_fin = 0;
        int suma = 0;
        int j = 1;
        while(j <= saptamani)
        {
            suma = suma+7*greutate_p_crestere_zii;
            suma_fin = suma_fin+suma;

           // cout << "suma while = " << suma_fin << endl;
            j++;
        }
        i++;
        suma_fin = suma_fin+greutate_p_initial+dif_zile*(j*greutate_p_crestere_zii);
  //      cout << "suma finala = " << suma_fin << endl;
        if(suma_fin < greutate_minima) g_g = 1;
        else
        {
            fout << suma_fin << " " << p << endl;
        }
    }
    if(g_g == 1) fout << "0";
    return 0;
}
