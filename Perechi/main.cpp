#include <iostream>
#include <fstream>
#include <limits.h>
#include <math.h>
using namespace std;
ifstream fin("perechi.in");
ofstream fout("perechi.out");
int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        int n = 0; fin >> n;
        int i = 1;
        int v[n+1];
        int num_numere = 0;
        int num_dif_max = 0;
        int num_min = 0;
        int max = 0;
        int mini =INT_MAX;
        while(i <= n)
        {
            fin >> v[i];
         //   cout << v[i] << " @@@@@@@@@@@@@";
            if(max < v[i]) max = v[i];
            if(mini > v[i]) mini = v[i];
            i++;
        }
        i = 0;
        while(i <= n)
        {
            if(max == v[i]) num_dif_max++;
            if(mini == v[i]) num_min++;
            i++;
        }
      //  cout << "num_dif_max = " << num_dif_max << " num_min = " << num_min << endl;
      //   cout << "max = " << max << endl;
      //  cout << endl;;
        i = 1;
        long long int min = INT_MAX;
        int index_1_fin = 0;
        int trebuie_sa_esim = 0;
        int dif = 0;
        int index_2_fin = 0;
        while(i <= n)
        {
            int j = 1;
            int index_1 = 0;
            int index_2 = 0;
            int num = 0;
            while(j <= n)
            {
                if(v[i] == v[j])
                {
                    num++;
                    index_1 = i;
                    index_2 = j;
                    if(index_1 != index_2)
                    {
                        num++;
                        num_numere++;
                    }
                }
                j++;
            }

            //if(index_1 != index_2) num++;
            if(min > num)
            {
               // cout << "am_intrat" << endl;
                min = num;
                dif = max-mini;
           //     cout << "num_numere = " << num_numere << endl;
                if(index_1 == index_2)
                {
                    trebuie_sa_esim = 1;
                    break;
                }
                if(num_min != 2)
                {
                    trebuie_sa_esim = 1;
                    break;
                }
                index_1_fin = index_1;
                index_2_fin  =  index_2;
            }
            i++;
            if(trebuie_sa_esim == 1) break;
        }
        if(trebuie_sa_esim == 0) {fout << index_1_fin << " " << index_2_fin << " " << dif;}
        if(trebuie_sa_esim == 1) {fout << "0";}
    }
    return 0;
}
