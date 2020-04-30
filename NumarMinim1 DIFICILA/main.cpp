#include <iostream>

using namespace std;

int main()
{
    long long int n = 0; cin >> n;
    long long int b = 0; cin >> b;
    long long int r = 0; cin >> r;
    //long long int D = 0;
    long long int i = 1;
    long long int num2 = 0;
    int r2 = 0;
    //int num = 0;
    long long int put = 1;
    while(i < n)
    {
        put = put*10;
        i++;
    }
   // cout << put << endl;
    r2 = put%b;
    //cout << "rest = " << r2 << endl;
    num2 = put+(r-r2);
    cout << num2 << endl;
    return 0;
}
