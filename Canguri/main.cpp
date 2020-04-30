#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("canguri.in");
ofstream fout("canguri.out");
int main()
{
    int lungime_traseu = 800;
    long long int castigator = 0;
    long long int nr_de_concurs = 0;
    long long int nr_de_sarituri = 0;
    long long int lungime_saritura = 0;
    int castigator_adv = 0;
    while(true)
    {
        fin >> nr_de_concurs >> lungime_saritura;
        if(fin.eof()) break;
       // cout << nr_de_concurs << " " << lungime_saritura << endl;
        if(lungime_saritura > castigator)
        {
            castigator = lungime_saritura;
            castigator_adv = nr_de_concurs;
            //cout << "castigator = " << castigator << " lungime saritura = " << lungime_saritura << " castigator = " << castigator << " castigator_adv = " << castigator_adv <<  endl;
        }
    }
    fout << castigator_adv << endl;
    nr_de_sarituri = 800/castigator;
    //cout << nr_de_sarituri << endl;
    if(nr_de_sarituri*castigator < lungime_traseu)
    {
        fout << nr_de_sarituri+1;
    }
    else
    {
        fout << nr_de_sarituri;
    }
    return 0;
}
