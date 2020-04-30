#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pilot.in");
ofstream fout("pilot.out");
#include <limits.h>
int main()
{
    int p,a;
    int n = 0;

    int y = 0;
    int i = 1;
    int num_legendary = 0;
    int num_spt = 0;
    fin >> n >> y;
    while(i <= n)
    {
        fin >> p >> a;
        int min = INT_MAX;

        int cmmdc = 0;
        int p2 = p;
        int a2 = a;
        //cout << "min = " << min << endl;
        int c;
	    while (p2 > 0) {

	        c = a2 % p2;

	        a2 = p2;

	        p2 = c;

	    }
        cmmdc = a2;
        cout << "p = " << p << " a = " << a << " cmmdc = " << cmmdc << endl;
        if(cmmdc % y == 0) num_spt++;
        cout << "nr_spt = " << num_spt << endl;
        //b
    if(cmmdc % y == 0)
    {
        int o = 2;
        int d = cmmdc-1;
        int num_div = 0;
        while(o <= d)
        {

            if(cmmdc%o == 0)
            {
               // cout << "cmmdc = " << cmmdc << " o = " << o << endl;
                int w = 2;
                int d2 = o-1;
                int am_gasit2 = 0;
                while(w <= d2)
                {
                    if(o % w == 0)
                    {
                        am_gasit2 = 1;
                        break;
                    }

                    w++;
                }
                if(am_gasit2 == 0)
                {
                    //cout << "e prim o = " << o << endl;
                    num_div++;
                    if(num_div >= 3) break;
                }
            }
            o++;
        }
        cout << "num_div = " << num_div << endl;
        if(num_div == 2) num_legendary++;

    }
    i++;
    }




    fout << num_spt << " " << num_legendary;
   // cout << "Hello world!" << endl;
    return 0;
}
