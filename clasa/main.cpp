#include <iostream>

using namespace std;

int main()
{
    int suma = 0; //suma
    int n = 0;
    cout << "Cate zile sunt:";
    cin >> n;
    cout << "Baietii citesc:" << n*2 << endl;
    cout << "Fetele citesc:" << n*3 << endl;
    suma = 3*n+2*n;
    cout << "Numarul de pagini este de:" << suma << endl;
    return 0;
}
