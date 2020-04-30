#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("triviador.in");
ofstream fout("triviador.out");
ifstream fin2("triviador.in");
int main()
{
    int n = 0;
    int p1,p2,p3;
    int i =1;
    int max = 0;
    int suma_p = 0;
    int max_2 = 0;
    int suma_dif = 0;
    fin >> n;
    while(i <= n)
    {
        fin >> p1 >> p2 >> p3;
        long long int suma = 0;
        suma = p1+p2+p3;
        if(suma != suma_p) suma_dif = 1;
        else if(suma == suma_p) suma_dif = 0;
 //       cout << "suma = " << suma << endl;
   //     cout << "suma_dif = " << suma_dif << endl;
     //   cout << "suma_p = " << suma_p << endl;
        if(max < suma) max = suma;
        suma_p = suma;
        i++;
    }













    fin2 >> n;
    int j = 1;
    while(j <= n)
    {
        fin2 >> p1 >> p2 >> p3;
        long long int suma = 0;
        suma = p1+p2+p3;
        if(suma != suma_p) suma_dif = 1;
        else if(suma == suma_p) suma_dif = 0;
     //   cout << "suma = " << suma << endl;
       // cout << "suma_dif = " << suma_dif << endl;
    //    cout << "suma_p = " << suma_p << endl;
        if(max > suma && max_2 < suma) max_2 = suma;
        suma_p = suma;
        j++;
    }
    if(suma_dif == 0) fout << "TOTI SUNT CASTIGATORI";
    else if(suma_dif == 1) fout << max << " " << max_2;
    return 0;
}
