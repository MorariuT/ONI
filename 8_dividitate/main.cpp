#include <iostream>

using namespace std;

int main()
{
    int n,m,n1,n2,n3,m1,m2,m3;
    cin >> n >> m;
    n1 = n%10;
    n2 = (n/10)%10;
    n3 = (n/100)%10;
    m1 = m%10;
    m2 = (m/10)%10;
    m3 = (m/100)%10;
    if(m % n1 == 0 || m % n2 == 0 || m % n3 == 0 || n % m1 == 0 || n % m2 == 0 || n % m3 == 0)
    {
        cout << "1 ";
    }
    if(m % n1 == 0 && m % n2 == 0 || m % n1 == 0 && m % n3 == 0 || m % n2 == 0 && m % n3  == 0 || n % m1 == 0 && n % m2 == 0 || n % m1 == 0 && n % m3 == 0 || n % m2 == 0 && n % m3  == 0)
    {
        cout << "2";
    }
    if (m % n1 == 0 && m % n2 == 0 && m % n3 == 0 || n % m1 == 0 && n % m2 == 0 && n % m3  == 0)
    {
        cout << "3";
    }
    return 0;
}
