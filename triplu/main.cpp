#include <iostream>

using namespace std;

int main()
{
    long long int n = 0,n2 = 0; cin >> n >> n2;
    long long int putn = 1;
    long long int n_t = n;
    long long int n2_t = n2;
    long long int u = n2;
    long long int putn2 = 1;
    while(n)
    {
        putn = putn*10;
        n = n/10;
    }
    putn = putn;
    while(n2)
    {
        putn2 = putn2*10;
        n2 = n2/10;
    }
    putn2 = putn2;
  //  cout << "put2 = " << putn2 << endl << "put = " << putn << endl;
    n2_t = n2_t*putn+n_t;
    //cout << "n2_t = " << n2_t << endl;
    //cout << "n_t = " << n_t << endl;
    n_t = n_t*putn2+u;
    //cout << "n_t = " << n_t << endl;
    if(n2_t > n_t)
    {
        cout << (n2_t*3);
    }
    else
    {
        cout << (n_t*3);
    }
  //  cout << "Hello world!" << endl;
    return 0;
}
