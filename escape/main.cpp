#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("");
ofstream fout("");
int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        int n = 0; fin >> n;
        int cod_elev = 0;
        int pct_elev = 0;

        int num_cam[10];
        for(int i = 0;i < 10;i++) num_cam[i] = 0;

        for(int i = 0;i < n;i++)
        {
            fin >> cod_elev;
            cod_elev /= 100;
            int nr_nou = 0;
            while(true)
            {
                while(cod_elev)
                {
                    int cifre = cod_elev%10;
                    nr_nou += cifre;
                }
                cod_elev = nr_nou;
                if(nr_nou < 10)
                {
                    num_cam[nr_nou]++;
                    break;
                }
            }
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
