#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pacanele.in");
ofstream fout("pacanele.out");
int main()
{
    int p = 0;
    fin >> p;
    int a = 0,b = 0,c = 0,k  = 0;
        int ka = 0,kb = 0,kc = 0;
        int ma = 0,mb = 0,mc = 0;
        fin >> a >> b >> c >> ka >> kb >> kc;
        fin >> ma >> mb >> mc;
        cout << "a = " << ka << " b = " << kb << " c =" << kc << endl;
        fin >> k;
    if(p == 1)
    {

        int s_a = a+ka;
        int s_b = b+kb;
        int s_c = c+kc;
        fout << s_a%10 << " " << s_b%10 << " " << s_c%10;
    }
    else if(p == 2)
    {
        int a = 0,b = 0,c = 0,k = 0;
        int ka = 0,kb = 0,kc = 0;
        int ma = 0,mb = 0,mc = 0;
        int num = 0;
        int i = 1;
        fin >> a >> b >> c;
        int a2 = a,b2 = b,c2 = c;
        fin >> ka >> kb >> kb;
        fin >> ma >> mb >> mc;
        fin >> k;
        while(true)
        {
            a = a+ka;
            b = b+kb;
            cout << "am_intrat" << endl;
            c = c+kc;
            num++;
            if(a == a2 && b == b2 && c == c2)
            {
                cout << num;
                break;
            }
        }
    }
    //cout << "Hello world!" << endl;
    return 0;
}
