#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bete.in");
ofstream fout("bete.out");
ifstream fin2("bete.in");
int main()
{
    int i = 1;
    int n = 0;
    int suma = 0;
    int num = 0;
    int num_b = 0;
    int a = 0;
    int b = 0;
    int maxi_a = 0;;
    int maxi_b = 0;;
    fin >> n;
    int raspuns_1 = 0;
    int raspuns_2 = 0;
    int suma_a = 0,suma_b = 0;;
    while(i <= n)
    {
        fin >> a;
        cout << "a = " << a << endl;
        if(maxi_a < a)
        {
            maxi_a = a;
            num = 0;
        }
        else if(maxi_a == a)
        {
            num++;
        }
        suma_a = suma_a+a;
        i++;
    }
    int j = 1;
    while(j <= n)
    {
        fin >> b;
        cout << "b = " << b << endl;
        if(maxi_b < b)
        {
            maxi_b = b;
            num_b = 0;
        }
        else if(maxi_b == b)
        {
            num_b++;
        }
        suma_b = suma_b+b;
        cout << "suma b = " << suma_b << endl;
        j++;
    }
    raspuns_1 = suma_a+suma_b;
    raspuns_2 = maxi_a + maxi_b;
    if(num > num_b)
    {
        fout << raspuns_1/n << endl << raspuns_2 << endl << num;
    }
    else if(num_b > num)
    {
        fout << raspuns_1/n << endl << raspuns_2 << endl << num_b;
    }

    return 0;
}
