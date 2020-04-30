#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("smartphone.in");
ofstream fout("smartphone.out");
ifstream fin2("smartphone.in");
int main()
{
    int t = 0;
    fin >> t;
    long long int n = 0;
    fin >> n;
   long long int max = 0;
   long long int i = 1;
   long long int intermediar = 0;
   long long int nr_citit_2 = 0;
   long long int nr_citit = 0;
    while(i <= n)
    {
        fin >> nr_citit;
        if(max < nr_citit) max = nr_citit;
        i++;
    }
    fin2 >> t;
    fin2 >> n;
    long long int j = 1;
    while(j <= n)
    {
        fin2 >> nr_citit_2;
        cout << "nr_citit_2 = " << nr_citit_2 << endl;
        if(intermediar < nr_citit_2 && max > nr_citit_2) intermediar = nr_citit_2;
        cout << intermediar << endl;
        j++;
    }
    if(t == 1)
    {
        fout << max;
    }
    else if(t == 2)
    {
        fout << intermediar;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
