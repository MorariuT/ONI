#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("parcare.in");
ofstream fout("parcare.out");
int main()
{
    int t= 0;
    int ziua_venire,luna_venire,ora_venire,minut_venire;
    int ziua_plecare,luna_plecare,ora_plecare,minut_plecare;
    int tarif_ora = 0;
    int dif_luna = 0;
    int num_zile = 0;
    int num_zile_plecare = 0;
    fin >> ziua_venire >> luna_venire >> ora_venire >> minut_venire;
    fin >> ziua_plecare >> luna_plecare >> ora_plecare >> minut_plecare;
    fin >> tarif_ora;
    fin >> t;
   // cout << "ziua_v = " << ziua_venire << " luna_v = " << luna_venire << " ora_v = " << ora_venire << " minut_v = " << minut_venire << endl;
    //cout << "ziua_p = " << ziua_plecare << " luna_p = " << luna_plecare << " ora_p = " << ora_plecare << " minut_p = " << minut_plecare << endl;
    dif_luna = luna_plecare-luna_venire;
    //cout << "dif_luna = " << dif_luna << endl;
        if(luna_venire == 1)
        {
            num_zile = ziua_venire;
        }
        if(luna_venire == 2)
        {
            num_zile = ziua_venire + 31;
        }
        if(luna_venire == 3)
        {
            num_zile = ziua_venire + 31 + 28;
        }
        if(luna_venire == 4)
        {
            num_zile = ziua_venire + 31 + 28 + 31;
        }
        if(luna_venire == 5)
        {
            num_zile = ziua_venire + 31 + 28 + 31 + 30;
        }
        if(luna_venire == 6)
        {
            num_zile = ziua_venire + 31 + 28 + 31 + 30 + 31;
        }
        if(luna_venire == 7)
        {
            num_zile = ziua_venire + 31 + 28 + 31 + 30 + 31 + 30;
        }
        if(luna_venire == 8)
        {
            num_zile = ziua_venire + 31 + 28 + 31 + 30 + 31 + 30 + 31;
        }
        if(luna_venire == 9)
        {
            num_zile = ziua_venire + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
        }
        if(luna_venire == 10)
        {
            num_zile = ziua_venire + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        }
        if(luna_venire == 11)
        {
            num_zile = ziua_venire + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        }
        if(luna_venire == 12)
        {
            num_zile = ziua_venire + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        }
      //  cout << "#####################num_zile = " << num_zile << endl;
        if(luna_plecare == 1)
        {
            num_zile_plecare = ziua_plecare;
        }
        if(luna_plecare == 2)
        {
            num_zile_plecare = ziua_plecare + 31;
        }
        if(luna_plecare == 3)
        {
            num_zile_plecare = ziua_plecare + 31 + 28;
        }
        if(luna_plecare == 4)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31;
        }
        if(luna_plecare == 5)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31 + 30;
        }
        if(luna_plecare == 6)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31 + 30 + 31;
        }
        if(luna_plecare == 7)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31 + 30 + 31 + 30;
        }
        if(luna_plecare == 8)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31 + 30 + 31 + 30 + 31;
        }
        if(luna_plecare == 9)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
        }
        if(luna_plecare == 10)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        }
        if(luna_plecare == 11)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        }
        if(luna_plecare == 12)
        {
            num_zile_plecare = ziua_plecare + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        }

    int num_min_d1 = (num_zile-1)*1440 + minut_venire + ora_venire*60;
    int num_min_d2 = (num_zile_plecare - 1)*1440 + minut_plecare + ora_plecare*60;
    int dif_minute = num_min_d2-num_min_d1;
    int num_ore = dif_minute/60;
    /*
    cout << "num_min_d1 = " << num_min_d1 << endl;
    cout << "num_min_d2 = " << num_min_d2 << endl;
    cout << "dif_minute = " << dif_minute << endl;
    cout << "num_ore = " << num_ore << endl;
    cout << "num_bani = " << (num_ore*tarif_ora) << endl;
    cout << "nr_minute in care masina a stat in parcare = " << (num_min_d2-num_min_d1) << endl;
    */
    if(t == 1)
    {
        fout << (num_min_d2-num_min_d1);
    }
    if(t == 2)
    {
        if(dif_minute%60 >= 15)
        {
            fout << ((num_ore+1)*tarif_ora);
        }
        else
        {
            fout << (num_ore*tarif_ora);
        }
    }
    return 0;
}
