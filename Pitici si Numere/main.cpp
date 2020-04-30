#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pitici.in");
ofstream fout("pitici.out");
int main()
{
    int n = 0;
    int i = 1;
    int m = 0;
    int greseli=0;
    int c,c1,c2;
    int cifr_zeciilor = 10;
    fin >> n;
    int jumate = n/2;
    while(i <= n)
    {
        fin >> m;

        c = m%10;
        c1 = (m/10)%10;
        c2 = (m/100)%10;

        if(cifr_zeciilor == 10)
        {

        }
        else
        {
            if (cifr_zeciilor==c2){

            }else{

              greseli = greseli+1;
            }

        }

        cifr_zeciilor = c1;

        i = i+1;

    }
    if(jumate < greseli)
    {
        fout << "CLASA SLABA";
    }
    else
    {
        fout << "CLASA BUNA";
    }

    //cout << "Hello world!" << endl;
    return 0;
}
