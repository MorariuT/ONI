#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    int s = 0; cin >> s;
    long long int suma = 0;
    long long int num_solutii = 0;
    int j = 0;
    int am_gasit = 0;
    for(int i = 1; i < s; i++)
    {
        //cout << "i = " << i << endl;
        int suma = 0;
        int numarator = 0;
        int i2 = i;
        //cout << i << endl;
        while(true)
        {
            if(suma == s)
            {
                cout << numarator << " " << i << endl;
                num_solutii++;
                break;
            }
            if(suma > s) break;
            suma += i2;
            numarator++;
            //cout << suma << " " << i2 << " " << numarator << endl;
            //cout << suma << endl;
            i2++;
        }
       // cout << endl;
    }
    cout << "Numar solutii " << num_solutii;
    return 0;
}
