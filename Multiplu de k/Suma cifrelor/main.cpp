#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int s = 0;
    int s1 = 0;
    cout << "Care este 'a':";
    cin >> a;
    cout << "Care este 'b':";
    cin >> b;
    s = a%10 + (a/10)%10 + (a/100)%10;
    s1 = b%10 + (a/10)%10 + (a/100)%10;
    if (s > s1){
        cout << "Ce mai mare nr. este:" << a;
    }
    else{
        cout << "Ce mai mare nr. este:" << b;
    }

    return 0;
}
