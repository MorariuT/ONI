#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("");
ofstream fout("");
int main()
{
    int c = 0;
    int i = 1;
    cin >> c;
    if(c == 1)
    {
        int L = 0;
        cin >> L;
        int pL = (L*(L+1))/2;
       // cout << "L = " << L << " primul termen = " << pL << endl;
        int i = L;
        while(true)
        {
            int j = 2;
            int d = pL-1;
            int nr_neprim = 0;
            while(j <= d/2)
            {
                if(pL % j == 0) nr_neprim = 1;
                j++;
            }
            if(nr_neprim == 0)
            {
                cout << pL << endl;
                break;
            }
            pL = pL+i;
            i++;
        }
    }
    if(c == 2)
    {
        int c = 0;
        cin >> c;
        int y = 0;
        int Pc = (c*(c-1))/2+1;
      //  cout << "primul termen de pe coloana " << c << " egal " << Pc << endl;
        while(true)
        {
            y++;
            int i = c+y;
            int d = Pc-1;
            int j = 2;
            int nr_neprim = 0;
            while(j <= d)
            {
                if(Pc % j == 0) nr_neprim = 1;
                j++;
            }
            if(nr_neprim == 0)
            {
                cout << Pc << endl;
                break;
            }
            Pc = Pc+i;
            //cout << "Pc = " << Pc << endl;
        }
    }
    return 0;
}
