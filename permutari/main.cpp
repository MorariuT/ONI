#include <iostream>

using namespace std;

int main()
{
    int n = 0; cin >> n;
    int n2 = n;
    int n3  = n;
    int n4 = n;
    int nr_nou = 0;

    int ultima_cif = 0;
    ultima_cif = n%10;


    int i = 1;
    int num = 0;
    int put_10 = 1;
    while(n)
    {
        num++;
        n = n/10;
    }
    while(i <= num-1)
    {
        put_10 = put_10*10;
        i++;
    }

  //  cout << put_10 << endl;
    while(true)
    {
        ultima_cif = n2%10;
        n3 = n3/10;
        n2 = n2/10;
        nr_nou = ultima_cif*put_10+n3;
        n3 = nr_nou;
        if(n4 == nr_nou) break;
        cout << nr_nou << endl;;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
