#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("");
ofstream fout("");
int main()
{
    long long int n = 0; cin >> n;
    unsigned long long int urmatorul_t = 0;
    long long int termen = 0;
    int i = 1;


    while(n)
    {
        long long max = 0;
        unsigned long long int t_1 = 1;
        unsigned long long int t_2 = 1;
            while(true)
            {

                if(t_1 > n)
                {
                    break;
                }
                else
                {
                   // cout << "####################### " << t_1 << endl;
                    if(max < t_1) max = t_1;
                   // cout << "max while = " << max << endl;
                }
                //cout << "t1 = " << t_1 << endl;
                urmatorul_t = t_1+t_2;
                t_1 = t_2;
                t_2 = urmatorul_t;
            }
        n = n-max;
       // cout << "n = " << n << endl;
        cout << max << " ";

    }




    return 0;
}
