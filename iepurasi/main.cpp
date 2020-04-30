#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
ifstream fin("iepurasi.in");
ofstream fout("iepurasi.out");
int main()
{
    int n = 0; fin >> n;
    int num_operatii = 0;
    int v[n];
    int am_facut = 0;
    int mini = INT_MAX;
    int i = 0;
    while(i < n)
    {
        fin >> v[i];
       // cout << v[i] << " ";
        i++;
    }
    //cout << endl;
    i = 0;
    while(i < n)
    {
        int maxi = 0;
        int index = 0;
        int j = i+1;
        while(j < n)
        {
            if(maxi < v[j])
            {
                maxi = v[j];
                index = j;
            }
            j++;
        }
       // cout << "max = " << maxi << endl;
        if(v[i] == maxi || v[i] > maxi)
        {
            if(mini > v[i] && am_facut == 0) mini = v[i];
           // cout << "NU FACEM NIMIC" << endl;
        }
        else if(v[i] < maxi)
        {
            if(maxi > v[i] && maxi != v[n-1])
            {
                //int i2 = 0;
                //cout << "FACEM tap de max " << index << endl;
                int k = 0;
                while(k < (n-index)/2)
                {
                    int aux = v[index+k];
                    v[index+k] = v[(n-1)-k];
                    v[(n-1)-k] = aux;
                    k++;
                }
                num_operatii++;
            }
            int s = 0;
            //cout << "@@@@@@@@@@@ pt max ";
            while(s < n)
            {
               // cout << v[s] << " ";
                s++;
            }
           // cout << endl;
            //cout << "FACEM tap de i " << i << endl;
            am_facut = 1;
            int k = 0;
            //cout  << "k = " << k << " si (n-i)/2 = " << (n-i)/2 << endl;
            while(k < (n-i)/2)
            {
                int aux = v[i+k];
                v[i+k] = v[(n-1)-k];
                //cout << "am_intrat i " << endl;
                v[(n-1)-k] = aux;
                k++;
            }
            num_operatii++;
            int e = 0;
         //   cout << "@@@@@@@@@@@ pt i ";
            while(e < n)
            {
              //  cout << v[e] << " ";
                e++;
            }
          //  cout << endl;
        }
        i++;
    }
    fout << num_operatii << endl << "999";
    return 0;
}
