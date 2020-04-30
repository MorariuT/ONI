#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int main()
{
    int t = 0; fin >> t;
    if(t == 1)
    {
        int n = 0; fin >> n;
        int i = 1;
        int poz_c = 0;
        int primul_t = 1;
        int poz = 0;
        int termenul_nostru = 0;
        while(i <= n)
        {
            fin >> poz_c;
            primul_t = primul_t+i;
            if(poz_c == 1)
            {
                poz = poz;
            }
            else if(poz_c == 2)
            {
                poz = poz+1;
            }
            termenul_nostru = primul_t+poz;
            i++;
        }
        fout << termenul_nostru << endl;
    }



    if(t == 2)
    {
        int n = 0; fin >> n;
        int primul_t = 1;
        int suma = 0;
        int precedent = 0;
        int i = 2;
        int num = 0;
        int poz_n = 0;
        while(true)
        {
            if(primul_t >= n)
            {
                break;
                precedent = primul_t;
            }
      //      cout << primul_t << " $$$$$$$$$$$$$$$$$$$$$$$si i = " << i << endl;
            primul_t += i;
            num++;
            i++;
            precedent = primul_t;
        }
        poz_n = primul_t-n;
        int num_rand = 1;
        i = 2;
        int ultimul_termen = 1;
        num++;
//        cout << primul_t << endl << "pozitia lui n de la dreapta la stanga = " << poz_n << endl << "randul lui n = " << num << endl;;
        while(true)
        {
            suma += ultimul_termen;
  //          cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " << ultimul_termen << endl;
            num_rand++;
            ultimul_termen += i;
            i++;
            //cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    //        cout << "num-poz = " << num-poz_n << endl;
            if(num_rand == (num-poz_n))
            {
       //         cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! %%%%%%%%%%%%%%%%%%Ultimul termen = " << ultimul_termen << endl;
                suma += ultimul_termen;
                break;
            }
        }
        int i2 = num-poz_n;
     //   cout << "&&&&&&&&&&&&&&&&&&&&&&&&" << i2 << endl;
        int numar_suma = ultimul_termen;
   //     cout << "(((((((((((((((((((((((((((((((()" << ultimul_termen << endl;
        while(true)
        {
            numar_suma = numar_suma+i2;
            suma += numar_suma;
            i2++;
 //           cout << "!!!!!!!!!!!!!!!!!!!!!!!!!! " << numar_suma << endl;
            if(numar_suma >= n) break;
        }
        fout << suma << endl;
    }
    return 0;
}
