#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("so.in");
ofstream fout("so.out");
int main()
{
    // .in
    int n,g,m,k;
    // rezultate partiale
    int max_saci_per_vagon = 0, vagoane_nevoie = 0;
    int saci_ramasi_in_ultimul_vagon = 0;
    fin >> n >> m >> g >> k;
    max_saci_per_vagon = k/g;

    cout << " max saci per vagon = " << max_saci_per_vagon << endl;

    if (n % max_saci_per_vagon == 0)
    {
        vagoane_nevoie = n/max_saci_per_vagon;
    }
    else if (n % max_saci_per_vagon != 0)
    {
        vagoane_nevoie = n/max_saci_per_vagon + 1;
        saci_ramasi_in_ultimul_vagon = n - ((vagoane_nevoie-1)*max_saci_per_vagon);
    }



    cout << "am nevoie de vagoane = " << vagoane_nevoie << endl;
    cout <<  "saci ramasi in ultimul vagon = " << saci_ramasi_in_ultimul_vagon << endl;
    if(m == vagoane_nevoie)
    {
        int greutatea_din_tren = n * m;
        fout << vagoane_nevoie << " " << greutatea_din_tren << " " << 0 << endl;
    }
    if(vagoane_nevoie > m)
    {
        int greutatea_din_tren = m * max_saci_per_vagon * g;
        int greutatea_din_depozit = n * g;
        int greutatea_ramasa = greutatea_din_depozit - greutatea_din_tren;
        fout << m << " " << greutatea_din_tren << " " << greutatea_ramasa << endl;
    }
    if(vagoane_nevoie < m)
    {
        int greutatea_din_tren = 0;
        if (saci_ramasi_in_ultimul_vagon>0){
             greutatea_din_tren = (vagoane_nevoie-1) * max_saci_per_vagon * g + saci_ramasi_in_ultimul_vagon * g ;
        }else{
             greutatea_din_tren = vagoane_nevoie * max_saci_per_vagon * g ;

        }
        int greutatea_din_depozit = n * g;
        int greutatea_ramasa = greutatea_din_depozit - greutatea_din_tren;
        fout << vagoane_nevoie << " " << greutatea_din_tren << " " << greutatea_ramasa << endl;
    }
    return 0;
}
