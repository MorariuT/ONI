#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sir.in");
ofstream fout("sir.out");
int main()
{
    int cifra_sir = 0;
    int i = 1;
    int suma = 0;
    int cifra_precedenta_sir = 0;

    fin >> cifra_precedenta_sir;

    while(true)
    {
            fin >> cifra_sir;
            if(fin.eof()) break;

            if((cifra_sir % 2 == 0 && cifra_precedenta_sir % 2  == 0)||
               (cifra_sir % 2 == 1 && cifra_precedenta_sir % 2  == 1) )
            {
                cout << "aceeasi paritate " << cifra_precedenta_sir << " " << cifra_sir << endl;
            }
            else if((cifra_sir % 2 == 0 && cifra_precedenta_sir % 2 ==  1) ||
                    (cifra_sir % 2 == 1 && cifra_precedenta_sir % 2 ==  0))
            {
                cout << "Paritate dif " << cifra_precedenta_sir << " " << cifra_sir << endl;
            }
            cifra_precedenta_sir = cifra_sir;

        }

}
