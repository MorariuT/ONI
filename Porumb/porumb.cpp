#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("porumb.in");
ofstream fout("porumb.out");
int main()
{
    int n,x;
    fin >> n >> x;
    int i = 1;
    int num_agri = 0;
    int num = 0;
    int sir_nou = 0;
    int raspuns_b = 0;
    while(i <= n)
    {

        //a
        if(i % 2 == 1) num++;
        //b
        i++;
    }
    fout << num << endl;


    int putere_2 = 1;
    int num_rand = 0;
    int max = 0;
    int randul_lui_x=1;
    while(true)
    {
        putere_2 = putere_2*2;
        num_rand++;
        int numar_p = n/putere_2;
        if (n%putere_2!=0) numar_p++;

        num_agri++;
        if (x%2==0 && (x-putere_2/2)%putere_2==0) randul_lui_x=num_agri;

        cout << "putere_2 = " << putere_2 << endl;
        cout << "numar_p = " << numar_p << endl;
        cout << "num_agri = " << num_agri << endl;
        cout << endl;
        if(numar_p <= 1) break;
    }
    fout << num_agri << endl;
    fout << randul_lui_x << endl;
    fout << putere_2/2 << endl;
    return 0;
}
