#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("unghi.in");
ofstream fout("unghi.out");
int main()
{
    float n = 0; fin >> n;
    float h,m;
    float i = 1;


    while(i <= n)
    {
        fin >> h >> m;
        if (h>11) h=h-12;
        float unghi = 0;
        float unghi_ore = 0;
        float unghi_min = 0;

        unghi_ore = h*30+(m/60)*30;
        unghi_min = 6*m;
        if (unghi_ore>unghi_min)
        {
            unghi = unghi_ore-unghi_min;
        }
        else
        {
            unghi = unghi_min-unghi_ore;
        }

        if(unghi>180) unghi = 360 - unghi;

        fout << unghi << endl;

        i++;
    }
    return 0;
}
