#include <iostream>

using namespace std;

int main()
{   int l = 0;
    int L = 0;
    int p = 0;
    int lp = 0;
    cout << "Cat este laura dreptunghiului:";
    cin >> l;
    L = l*7;
    p = L*2+l*2;
    lp = p/4;
    cout << "Perimetrul este:" << p << endl;
    cout << "Latura patratului este:" << lp  << endl;

    return 0;
}
