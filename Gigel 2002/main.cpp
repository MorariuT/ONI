#include <iostream>

using namespace std;

int main()
{
    int n = 0; cin >> n;
    long long int nr_sec_total_an = 60*60*24*365;
    //cout << nr_sec_total_an << endl << n;
    int ani = n/nr_sec_total_an;
    int ani_biseci = 0;
    int secunde_trecute = nr_sec_total_an*ani;
    int nr_sec_ramese = n-secunde_trecute;
    cout << ani << " ";
    for(int nr = 2002-ani; nr < 2002; nr++)
    {
        if(nr%4 == 0) ani_biseci++;
    }
    int sec_pe_luna = 60*60*24*30;
    int cate_luni = nr_sec_ramese/sec_pe_luna;
    //cout << cate_luni << " ";
    nr_sec_ramese = nr_sec_ramese-sec_pe_luna*cate_luni;
    int nr_sec_zi = 60*60*24;
   // cout << "nr_sec_zi = " << nr_sec_zi << endl;
    int cate_zile = nr_sec_ramese/nr_sec_zi+15;
    //cate_zile = cate_zile+ani_biseci;
    if(cate_zile > 31)
    {
        cate_zile -= 31;
        cate_luni++;
    }
    cout << cate_luni << " ";
    if(cate_luni == 0)
    {
        cout << cate_zile;
    }
    else
    {
        cout << cate_zile-1;
    }
    return 0;
}
