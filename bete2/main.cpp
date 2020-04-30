#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bete.in");
ofstream fout("bete.out");
ifstream fin2("bete.in");
int main()
{
    long long int n = 0; fin >> n;
    fin2 >> n;
    long long int suma = 0;
    long long int a,b;
    long long int i = 1;
    long long int lungime_bat = 0;
    long long int max1 = 0;
    long long int max2 = 0;
    long long int num = 0;
    while(i <= n)
    {
        fin >> a;
        num = num+1;
        suma = suma + a;
        if(a > max1) max1 = a;
        i++;
    }
    i = 1;
    while(i <= n)
    {
        fin >> b;
        if(b > max2) max2 = b;
        suma = suma+b;
        i++;
    }
    lungime_bat = suma/num;
    i = 1;
    long long int num_2 = 0;
    while(i <= n)
    {
        fin2 >> a;
    //    cout << a << " ";
       // num = num+1;
        //suma = suma + a;
        if(a == max1) num_2++;;
        i++;
    }
//    cout << "num_2 = " << num_2 << endl;
    i = 1;
    long long int num_3 = 0;
    while(i <= n)
    {
        fin2 >> b;
     //   cout << b << " ";
        if(b == max2) num_3++;;
        suma = suma+b;
        i++;
    }
   // cout << "num_3 = " << num_3 << endl;
       fout << lungime_bat << endl;
       fout << max1 + max2;
        if(num_2 >= num_3)
        {
            fout << endl << num_3;
        }
        if(num_2 < num_3)
        {
            fout << endl << num_2;
        }

    return 0;
}
