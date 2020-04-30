#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("");
ofstream fout("");
int main()
{
   long long  int n,k,p;
    cin >> n >> k >> p;
   long long int urmatorul_t = 0;
    int t1 = 1;
    int t2 = 1;
    int t3 = 2;
    long long int num = 0;
   // int num_t = 0;
    int am_gasit = 0;
    long long int i = 1;
    while(i <= n)
    {
        urmatorul_t = t1+t2+t3;
        t1 = t2%10;
        t2 = t3%10;
        t3 = urmatorul_t%10;
        cout << "t1 = " << t1%10 << endl;
        i++;
        if(k == t1%10) num++;
    }
    cout << num << endl;
    t1 = 1;
    t2 = 1;
    t3 = 2;
   // int num = 0;
    int num_t = 0;
   // int am_gasit = 0;
   // int i = 1;
   long long int u = 1;
    while(u <= p)
    {

        urmatorul_t = t1+t2+t3;
        t1 = t2%10;
        u++;
        t2 = t3%10;
        t3 = urmatorul_t%10;
        //cout << "t1 = " << t1%10 << " t2 = " << t2%10 << " t3 = " << t3%10 << " " << u << endl;;

        if(u == p)
        {
            cout << t1%10;
            break;
        }
    }
//cout << num << endl;
    return 0;
}
