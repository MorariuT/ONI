#include <iostream>

using namespace std;

int main()
{
    int s,c,n,i;
    cin >> s >> c >> n;
    i = c+n;
    if (s % c == 0 && s % n == 0)
    {
        cout << "CN";
    }
    if (s % c == 0)
    {
        cout << "C";
    }
    if (s % n == 0)
    {
        cout << "N";
    }
    if (s < c && s < n)
    {
        cout << "Nimic";
    }
  //  cout << "Hello world!" << endl;
    return 0;
}
