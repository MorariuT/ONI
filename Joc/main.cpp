#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("joc.in");
ofstream fout("joc.out");
int main()
{
    int n = 0;
    int ps = 0;
    int maxi = 0;
    int i = 1;
    int m = 0;
    int o = 0;
    int num_ioana_1_m = 0;
    int num_malina_2_o = 0;
    int nr_special_m = 0;
    int nr_special_o = 0;
    fin >> n;
    while(i <= n)
    { //Pentru fiecare runda
        int cm = 0;
        int co = 0;

        fin >> m >> o;
        cm = (m/100)%10;
        co = (o/100)%10;
        if(cm > co)
        {
            num_ioana_1_m = num_ioana_1_m + 1;
            //fout << m << endl;
            nr_special_m = m;
        }
        else if(co == cm)
        {
        }
        else if(co > cm)
        {
            num_malina_2_o = num_malina_2_o + 1;
            //fout << o << endl;
            nr_special_o = o;
        }
        //maxim
        if(m > maxi)
        {
            maxi = m;
            ps = 1;
        }
        if(o > maxi)
        {
            maxi = o;
            ps = 2;
        }

        i = i+1;
    }
    fout << maxi << endl;
    fout << ps << endl;
      // Maxim





    if(num_ioana_1_m > num_malina_2_o)
    {
        fout << "1" << endl;
    }
    else if(num_ioana_1_m < num_malina_2_o)
    {
        fout << "2" << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
