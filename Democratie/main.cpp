#include <iostream>
#include <fstream>

using namespace std;


ifstream fin("democratie.in");
ofstream fout("democratie.out");


int main()
{

    int n = 0; fin >> n;
    int nr_citit = 0;
    int t1 = 0,t2 = 0;
    int min_cost = 0;
    int v[n];
    int c1 = 0,c2 = 0;
    int lungime_max = 0;
    //int suma_bani = 0;
    //int suma_bani2 = 0;
    //int suma_buna = 0;
    for(int i = 0;i < n;i++)
    {
        fin >> v[i];
      //  cout << v[i] << " ";
    }

   //s cout << endl;


    fin >> t1 >> t2;
    fin >> c1 >> c2;


    int suma_totala = 0;
    int muncitor_p = 0;
    int poz_m1 = 0;
    int poz_m2 = n-1;
    int suma_bani = 0;
    int suma_totala2 = 0;


    poz_m1 = 1;
    suma_totala += t1*v[0];
    muncitor_p = 1;
    for(int i = 2;i <= n;i++)
    {
        int cost_1 = 0,cost_2 = 0;

        if(muncitor_p != 1) cost_1 = t1*v[poz_m1];
        else cost_1 = t1*v[poz_m1]+c1;


        if(muncitor_p != 2) cost_2 = t2*v[poz_m2];
        else cost_2 = t2*v[poz_m2]+c2;
      //  cout << "cost_1 = " << cost_1 << " cost_2 = " << cost_2 << endl;
        if(cost_1 < cost_2)
        {
            muncitor_p = 1;
            suma_totala += cost_1;
            poz_m1++;
        }
        if(cost_1 > cost_2)
        {
            muncitor_p = 2;
            suma_totala += cost_2;
            poz_m2--;
        }
       // if(i == n) break;
    }
 //   cout << "suma_totala = " << suma_totala << endl;;



    poz_m1 = 0;
    poz_m2 = n-1;
    muncitor_p = 0;
    poz_m1 = 0;
    suma_totala2 += t2*v[n-1];
    muncitor_p = 2;
    poz_m2 = n-2;
    for(int i = 2;i<=n;i++)
    {
        int cost_1 = 0,cost_2 = 0;

        if(muncitor_p != 1) cost_1 = t1*v[poz_m1];
        else cost_1 = t1*v[poz_m1]+c1;


        if(muncitor_p != 2) cost_2 = t2*v[poz_m2];
        else cost_2 = t2*v[poz_m2]+c2;
        //cout << "cost_1 = " << cost_1 << " cost_2 = " << cost_2 << endl;

        if(cost_1 < cost_2)
        {
            muncitor_p = 1;
            suma_totala2 += cost_1;
            poz_m1++;
        }
        if(cost_1 > cost_2)
        {
            muncitor_p = 2;
            suma_totala2 += cost_2;
            poz_m2--;
        }
       // if(i == n) break;
    }
 //   cout << suma_totala2 << endl;
    if(suma_totala2 < suma_totala) fout << suma_totala2;
    if(suma_totala2 > suma_totala) fout << suma_totala;


    return 0;
}
