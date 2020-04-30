#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("culegere.in");
ofstream fout("culegere.out");
int main()
{
    long long int n = 0,k = 0; fin >> n >> k;
    cout << k << endl;
    long long int nr_probleme = n*(n+1)/2;
    long long int nr_de_pagini = 0;
    if(nr_probleme < 10)
    {
        nr_de_pagini = nr_probleme;
    }
    else if(nr_probleme < 100)
    {
        nr_de_pagini = 9+(nr_probleme-9)*2;
    }
    else if(nr_probleme < 1000)
    {
        nr_de_pagini = 9+90*2+(nr_probleme-99)*3;
    }
    else if(nr_probleme < 10000)
    {
        nr_de_pagini = 9+90*2+900*3+(nr_probleme-999)*4;
    }
    else if(nr_probleme < 100000)
    {
        nr_de_pagini = 9+90*2+9000*3+9000*4+(nr_probleme-9999)*5;
    }
    else if(nr_probleme < 1000000)
    {
        nr_de_pagini = 9+90*2+900*3+9000*4+900000*5+(nr_probleme-99999)*6;
    }
    else if(nr_probleme < 10000000)
    {
        nr_de_pagini = 9+90*2+900*3+9000*4+90000*5+900000*6+(nr_probleme-999999)*7;
    }
    else if(nr_probleme < 100000000)
    {
        nr_de_pagini = 9+90*2+900*3+9000*4+90000*5+900000*6+9000000*7+(nr_probleme-9999999)*8;
    }
    else if(nr_probleme < 1000000000)
    {
        nr_de_pagini = 9+90*2+900*3+9000*4+90000*5+900000*6+9000000*7+900000000*8+(nr_probleme-99999999)*9;
    }
    else if(nr_probleme < 10000000000)
    {
        nr_de_pagini = 9+90*2+900*3+9000*4+90000*5+900000*6+9000000*7+90000000*8+900000000*9+(nr_probleme-999999999)*10;
    }
    fout << nr_de_pagini << endl;
    long long int terrmen = 1;
    long long int am_iesit = 0;
    long long int num_rand = 0;
    for(long long int i = 1;i <= k;i++)
    {
        num_rand++;
        for(long long int j = 0;j < i;j++)
        {
           // cout << terrmen << " ";

            if(terrmen == k)
            {
                am_iesit = 1;
                cout << k << " " << terrmen;
                break;
            }
            terrmen++;

        }
        if(am_iesit == 1) break;
        //cout << endl;
    }
    fout << num_rand << endl;
    return 0;
}
