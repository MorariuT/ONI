#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("catsfood.in");
ofstream fout("catsfood.out");
int main()
{
    int tip_1 = 0; fin >> tip_1;
    int tip_2 = 0; fin >> tip_2;
    int tip_3 = 0; fin >> tip_3;
    int n = 0; fin >> n;
    int i = 1;
    int produs = 0;
    int c1 = 0;
    int c2 = 0;
    int nr_produse_pt_cel_putin_o_pisica = 0;
    int am_gasit_mancare_pt_toate_pisicie = 0;
    int c3 = 0;
    while(i <= n)
    {
        fin >> produs;
        cout << produs << endl;
        c1 = produs%10;
        c2 = (produs/10)%10;
        c3 = (produs/100)%10;
        if(c1 == tip_1 || c1 == tip_2 || c1 == tip_3 || c2 == tip_1 || c2 == tip_2 || c2 == tip_3 || c3 == tip_1 || c3 == tip_2 || c3 == tip_3)
        {
            nr_produse_pt_cel_putin_o_pisica++;
        }
        if(c1 == tip_1 && c2 == tip_2 && c3 == tip_3 || c1 == tip_1 && c3 == tip_2 && c2 == tip_3 || c2 == tip_1 && c1 == tip_2 && c3 == tip_3 || c2 == tip_1 && c3 == tip_2 && c1 == tip_3 || c3 == tip_1 && c1 == tip_2 && c2 == tip_3 || c3 == tip_1 && c2 == tip_2 && c1 == tip_3)
        {
            am_gasit_mancare_pt_toate_pisicie = 1;
        }
        i++;
    }
    if(am_gasit_mancare_pt_toate_pisicie == 1)
    {
        fout << nr_produse_pt_cel_putin_o_pisica << endl << "DA";
    }
    else
    {
        fout << nr_produse_pt_cel_putin_o_pisica << endl << "NU";
    }
    //cout << "Hello world!" << endl;
    return 0;
}
