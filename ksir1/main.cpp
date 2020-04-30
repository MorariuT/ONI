#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ksir.in");
ofstream fout("ksir.out");
int main()
{
    long long int k = 0; fin >> k;
    long long int g = 1;
    long long int num = 0;
    while(true)
    {
        long long int i = 1;
        long long int break_1 = 0;
        while(i <= g)
        {
            num++;
            if(num == k)
            {
                //cout << "###################################### AM_INTRAT " << endl;
                break_1 = 1;
                fout << i%10 << endl;
                break;
            }
            //cout << i;
           // cout << " #################################     while 1        num = " << num << endl;

            i++;
        }
        if(break_1 == 1)
        {
            break;
        }
        i = 1;
        while(i <= g-1)
        {
            num++;
            if(num == k)
            {
                //cout << "###################################### AM_INTRAT " << endl;
                break_1 = 1;
                fout << g%10 << endl;;
                break;
            }
            //cout << g;
            //cout << " #################################       while 2      num = " << num << endl;

            i++;
        }
        if(break_1 == 1)
        {
            break;
        }
        g++;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
