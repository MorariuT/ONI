#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("inimioare.in");
ofstream fout("inimioare.out");
ifstream fin_valentina("inimioare.in");
int main()
{
    int n = 0;
    fin >> n;
    int v_1,v_2,v_3,v_4;
    int a_1,a_2,a_3,a_4;
    int i = 1;
    int j = 1;
    int max_v = 0;
    int max_v_2 = 0;
    while(i <= n)
    {
        fin >> v_1 >> v_2 >> v_3 >> v_4;
        if(v_1 > max_v) max_v = v_1;
        if(v_2 > max_v) max_v = v_2;
        if(v_3 > max_v) max_v = v_3;
        if(v_4 > max_v) max_v = v_4;
        cout << "Maximul de pe fiecre rand = " << max_v << endl;
        if(max_v == v_1)
        {
            if(v_2 > v_4) max_v_2 == v_2;
            else if(v_2 < v_4) max_v_2 == v_4;
            cout << "v_1";
        }
        if(v_2 == max_v)
        {
            if(v_3 > v_1) max_v_2 == v_3;
            else if(v_3 > v_1) max_v_2 == v_1;
            cout << "v_2";
        }
        if(v_3 == max_v)
        {
            if(v_2 > v_4) max_v_2 == v_2;
            else if(v_2 < v_4) max_v_2 == v_4;
            cout << "v_3";
        }
        if(v_4 == max_v)
        {
            if(v_1 > v_3) max_v_2 == v_1;
            else if(v_1 < v_3) max_v_2 == v_3;
            cout << "v_4";
        }
        cout << "Maximul secundar de pe fiecare rand = " << max_v_2 << endl;
        i++;
    }




    int max_v_3 = 0;
    int max_v_4 = 0;
    int y = 1;
    int q = 1;
    while(y <= n)
    {
        fin >> a_1 >> a_2 >> a_3 >> a_4;
        if(a_1 > max_v_3) max_v_3 = a_1;
        if(a_2 > max_v_3) max_v_3 = a_2;
        if(a_3 > max_v_3) max_v_3 = a_3;
        if(a_4 > max_v_3) max_v_3 = a_4;
        cout << endl << "Maximul de pe fiecare rand Valenin = " << max_v_3 << endl;
        if(max_v_3 == a_1)
        {
            if(a_4 > a_3) max_v_4 == a_1;
            else if(a_4 < a_3) max_v_4 == a_3;
        }
        if(a_2 == max_v_4)
        {
            if(a_3 > a_1) max_v_4 == a_3;
            else if(a_3 > a_1) max_v_4 == a_1;
        }
        if(a_3 == max_v_4)
        {
            if(a_2 > a_4) max_v_4 == a_2;
            else if(a_2 < a_4) max_v_4 == a_4;
        }
        if(a_4 == max_v_4)
        {
            if(a_1 > a_3) max_v_4 == a_1;
            else if(a_1 < a_3) max_v_4 == a_3;
            cout << "a_4 "
        }
        cout << "Maximuml secundar de pe fiecare rand Valentin = " << max_v_4 << endl;
        y++;
    }
    int num_v_1 = max_v*10+max_v_2;
    int num_v_2 = max_v_3*10+max_v_4;
    if(num_v_1 > num_v_2) fout << num_v_1 << num_v_2;
    if(num_v_2 > num_v_1) fout << num_v_2 << num_v_1;
    return 0;
}
