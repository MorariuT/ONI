#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zece.in");
ofstream fout("zece.out");
int main()
{
    int num = 0;
    int n = 0; fin >> n;
    int nr_citit = 0;
    int i = 1;
    while(i <= n)
    {
        fin >> nr_citit;
        //cout << "nr_citit = " << nr_citit << endl;
        int j = 1;
        int nr_cu_1 = 1;
        int am_gasit_nr_cu_1 = 0;
        int am_gasit_nr_cu_0 = 0;
        while(j <= 1000)
        {

            nr_cu_1 = nr_cu_1+j;
            cout << nr_cu_1 << endl;
            if(nr_citit == nr_cu_1)
            {
                am_gasit_nr_cu_1 = 1;
                am_gasit_nr_cu_0 = 0;
                break;
            }
            else
            {
               // cout << "am_intrat ";
                am_gasit_nr_cu_0 = 1;
                am_gasit_nr_cu_1 = 0;
            }
            j++;
        }
        if(am_gasit_nr_cu_1 == 1)
        {
            fout << "1 ";
        }
        if(am_gasit_nr_cu_0 == 1)
        {
            fout << "0 ";
        }
        i++;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
