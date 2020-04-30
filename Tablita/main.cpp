#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("tablita.in");
ofstream fout("tablita.out");
int main()
{
    int n = 0;
    int numar_t = 0;
    fin >> n;
    int tablita = 0;
    int am_gasit = 0;
    while(true)
    {
        tablita++;
       // cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$tablita = " << tablita << endl;
        int i = 1;
        while(i <= tablita)
        {
            numar_t++;
            //cout << "numar_t = " << numar_t << endl;
            i++;
            if(n == numar_t)
            {
                fout << tablita;
                am_gasit = 1;
            }

        }
        if(am_gasit == 1)
        {
            break;
        }
        //numar_t = numar_t+tablita;
    }
   // cout << "Hello world!" << endl;
    return 0;
}
