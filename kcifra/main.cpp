#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("kcifra.in");
ofstream fout("kcifra.out");
int main()
{
    long long int k = 0; fin >> k;
    long long int sute = 0;
    long long int zeci = 11;
    long long int i = 1;
    long long int termen = 0;
    int num = 0;
    long long int termen2 = 0;
    long long int termen3 = 0;
    int k_cif = 0;
    while(i <= k)
    {
        if(termen3 % 10 == 9) termen3 = termen3+1;
        else termen3 = termen3+11;
      //  cout << "termen3 = " << termen3 << endl;
        int cifre = 0;
        termen = termen3;
        termen2 = termen3;
        //cout << termen3;
        while(termen2)
        {
            num++;
            termen2 = termen2/10;
        }
     //   cout << "num = " << num << endl;
        if(num >= k)
        {
            int poz_cif = 0;
            poz_cif = num-k;
            long long int putere_10 = 1;
            long long int j = 0;
   //         cout << "poz_cif = " << poz_cif << endl;
            while(j <= poz_cif)
            {
                putere_10 = putere_10*10;
                j++;
            }
 //           cout << "putere_10 = " << putere_10 << endl;
            k_cif = termen3%putere_10;
            break;
        }
        i++;
    }
    fout << k_cif%10 << endl;
    return 0;
}
