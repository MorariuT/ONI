#include <iostream>

using namespace std;

int main()
{
    int a = 0,b = 0;; cin >> a >> b;
    int a2 = a,a3 = a,a4 = a;
    int b2 = b,b3 = b,b4 = b;
    int cifr_b = 0;
    int cifr_a = 0;
    int max = 0;
    int l_a[10];
    int l_b[10];
    int i = 0;
    while(i < 10)
    {
        l_a[i] = 0;
        l_b[i] = 0;
        i++;
    }
    while(a)
    {
        cifr_a = a%10;
        a = a/10;
        if(cifr_a == 0) l_a[0]++;
        if(cifr_a == 1) l_a[1]++;
        if(cifr_a == 2) l_a[2]++;
        if(cifr_a == 3) l_a[3]++;
        if(cifr_a == 4) l_a[4]++;
        if(cifr_a == 5) l_a[5]++;
        if(cifr_a == 6) l_a[6]++;
        if(cifr_a == 7) l_a[7]++;
        if(cifr_a == 8) l_a[8]++;
        if(cifr_a == 9) l_a[9]++;
        while(b)
        {
            cifr_b = b%10;
            b = b/10;
            if(cifr_b == 0) l_b[0]++;
            if(cifr_b == 1) l_b[1]++;
            if(cifr_b == 2) l_b[2]++;
            if(cifr_b == 3) l_b[3]++;
            if(cifr_b == 4) l_b[4]++;
            if(cifr_b == 5) l_b[5]++;
            if(cifr_b == 6) l_b[6]++;
            if(cifr_b == 7) l_b[7]++;
            if(cifr_b == 8) l_b[8]++;
            if(cifr_b == 9) l_b[9]++;
        }
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
    return 0;
}
