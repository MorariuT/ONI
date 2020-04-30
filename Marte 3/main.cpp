#include <iostream>

using namespace std;

int main()
{
    int y = 0;
    int n = 0;
    int m = 0;
    cout << "Cate ore dureaza ziua:";
    cin >> y;
    cout << "Cate antene ii cresc lui Iggle:";
    cin >> n;
    m = n/y + 1;
    cout << "Iggle va avea " << n << " antene dupa " << m << " zile";
    return 0;
}
