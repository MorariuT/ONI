#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int y = 0;
    cout << "Nr.-ul este:";
    cin >> x;
   // cout << "Oglindul este:" << x%10;
    //cout << (x/10)%10;
    //cout << (x/100)%10;
    //cout << (x/1000)%10;
    a = (x/1000)%10;
    b = (x/100)%10;
    c = (x/10)%10;
    d = x%10;
    y = d*1000 + c*100 + b*10 + a;
    cout << "Oglindul este:" << y;
    return 0;
}
