#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Al catelea participant este:";
    cin >> n;
    if (n%3==1)
    {
        cout << "Sapca este rosie";
    }
    if (n%3==2)
    {
        cout << "Sapca este albastra";
    }
    if (n%3==0)
    {
        cout << "Sapca este galbena";
    }
    return 0;
}
