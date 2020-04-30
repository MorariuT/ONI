#include <iostream>

using namespace std;

int main()
{
    int a = 0; cin >> a;
    int b = 0; cin >> b;
    int l_a[10];
    int l_b[10];
    int i = 0;
    while(i < 10)
    {
        l_a[i] = 0;
        l_b[i] = 0;
        i++;
    }
    int cifre_a = 0;
    int cifre_b = 0;
    while(a)
    {
        cifre_a = a%10;
        a = a/10;
        if(cifre_a == 0) l_a[0]++;
        if(cifre_a == 1) l_a[1]++;
        if(cifre_a == 2) l_a[2]++;
        if(cifre_a == 3) l_a[3]++;
        if(cifre_a == 4) l_a[4]++;
        if(cifre_a == 5) l_a[5]++;
        if(cifre_a == 6) l_a[6]++;
        if(cifre_a == 7) l_a[7]++;
        if(cifre_a == 8) l_a[8]++;
        if(cifre_a == 9) l_a[9]++;
    }
    while(b)
    {
        cifre_b = b%10;
        b = b/10;
        if(cifre_b == 0) l_b[0]++;
        if(cifre_b == 1) l_b[1]++;
        if(cifre_b == 2) l_b[2]++;
        if(cifre_b == 3) l_b[3]++;
        if(cifre_b == 4) l_b[4]++;
        if(cifre_b == 5) l_b[5]++;
        if(cifre_b == 6) l_b[6]++;
        if(cifre_b == 7) l_b[7]++;
        if(cifre_b == 8) l_b[8]++;
        if(cifre_b == 9) l_b[9]++;
    }
    i = 0;
    while(i < 10)
    {
        if(l_a[i] > 0 && l_b[i] > 0)
        {
        cout << i << " ";
        }
        i++;
    }
    cout << endl;
    i = 9;
   // cout << "######################### " << l_a[0] << " " << l_b[0] << endl;
    while(i > -1)
    {
        int suma = l_a[i]+l_b[i];
        //cout << "$$$$$$$$$$$$" << suma << endl;
        while(suma > 0)
        {
            cout << i;
            suma--;
        }
        i--;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
