#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("benzinarii.in");
ofstream fout("benzinarii.out");
int main()
{
    long long int n = 0;
    fin >> n;
    long long int n_temp = n;
   long long int n3 = n;
   int n4 = n;
   long long int palindrom_inferior = 0;
   long long  int n_pa = n;
   long long int palindrom_superior = 0;
   long long int num_km = 1;
   long long int num_km__ = 0;
   long long int i = 1;
    /*
    while(true)
    {
        n = n+i;
        int n2 = n;
        int cifre = 0;
        int nr_nou = 0;
        while(n > 0)
        {
            cifre = n%10;
            n = n/10;
            nr_nou = nr_nou*10+cifre;
        }
        num_km++;
        n = n2;
        if(n2 == nr_nou) break;
    }
    */
    while(true)
    {
        n = n+i;
        //cout << "n = " << n << endl;
       long long int n2 = n;
        int cifre = 0;
       long long int nr_nou = 0;
        while(n > 0)
        {
            cifre = n%10;
            n = n/10;
            nr_nou = nr_nou*10+cifre;
        }
        num_km++;
        n = n2;
        //cout << "n2 while = " << n2 << endl;
        if(n2 == nr_nou)
        {
           // cout << "n2 = " << n2 << " nr_nou = " << nr_nou << endl;
            palindrom_superior = nr_nou;
            break;
        }
    }
    cout << "palindrom_superior = " << palindrom_superior << endl;
    while(true)
    {
        n4 = n4-i;
        //cout << "n = " << n << endl;
       long long int n_inf = n4;
        int cifre = 0;
       long long int nr_nou_inf = 0;
        while(n4 > 0)
        {
            cifre = n4%10;
            n4 = n4/10;
            nr_nou_inf = nr_nou_inf*10+cifre;
        }
        num_km++;
        n4 = n_inf;
        //cout << "n2 while = " << n_inf << endl;
        if(n_inf == nr_nou_inf)
        {
            //cout << "n2 = " << n_inf << " nr_nou = " << nr_nou_inf << endl;
            palindrom_inferior = nr_nou_inf;
            break;
        }
    }
    int dif_superioara = palindrom_superior-n_temp;
    int dif_inf = n_temp - palindrom_inferior;
    cout << "dif superioara = " << dif_superioara << " dif inf = " << dif_inf << endl;
    cout << "palindrom_inf = " << palindrom_inferior << endl;
    if(dif_inf < dif_superioara)
    {
        fout << dif_inf << " " << (n_temp+dif_inf);
    }
    else if(dif_inf > dif_superioara)
    {
        fout << dif_superioara << " " << (n_temp + dif_superioara);
    }
    else if(dif_inf == dif_superioara)
    {
        fout << dif_superioara << " " << (n_temp + dif_superioara);
    }
   //  cout << "dif_pa_2 = " << dif_pa_2 << endl;
    //fout << num_km << " " << n3+num_km;
    return 0;
}
