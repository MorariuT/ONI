#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,k; cin >> n >> k;
    int dn = n-1;
    int dk = k-1;
    while(n)
    {
        cout << "1";
        n--;
    }
    cout << "01";
    while(k)
    {
        cout << "0";
        k--;
    }
    cout << "10";
    return 0;
}
