#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("balmascat.in");
ofstream fout("balmascat.out");
int main()
{
    int p,n;
    fin >> n >> p;
    int num = 0;
    int c = 0;
    int produs_emporar = 0;
    int num_impare = 0;
    int i = 1;
    while(true)
    {
        produs_emporar = p*i;
        i++;
        num++;
        if(produs_emporar == n) break;
        else if(n - produs_emporar == 1)
        {
           // cout << produs_emporar << endl << produs_emporar+1 << endl;
            num++;
            break;
        }
        else if(n - produs_emporar == 2)
        {
            num++;
            break;
        }
        else if(n - produs_emporar == 3)
        {
            num++;
            break;
        }
        else if(n - produs_emporar == 4)
        {
            num++;
            break;
        }
        //cout << produs_emporar << endl;
    }
    c = num%10;
    /*
    cout << "num = " << num << endl;
    cout << "p*2 = " << p*2 << endl;
    cout << "nr cif cod final = " << p*2-1 << endl;
    cout << "u(num) = " << c << endl;
    cout << "u(num)*2 = " << c*2 << endl;
    */
    int j = 1;
    long long int nr_nou = 0;
    int it = p*2-1;
    while(j <= it)
    {
        num_impare++;
        //cout << "num_impare = " << num_impare << endl;
        if(c < 9)
        {
                if(num_impare % 2 == 1)
                {
                    nr_nou = nr_nou*10+(c+1);
                    //cout << "Nr_nou 1  = " << nr_nou << endl;
                }
                else if(num_impare % 2 == 0)
                {
                    nr_nou = nr_nou*10+c;
                }
        }
        else if(c == 9)
        {
            if(num_impare % 2 == 1)
            {
                nr_nou = nr_nou*10+(c-1);
                //cout << "Nr_nou 1  = " << nr_nou << endl;
            }
            else if(num_impare % 2 == 0)
            {
                nr_nou = nr_nou*10+c;
            }
        }
        j++;
    }
    fout << nr_nou << endl;
    return 0;
}
