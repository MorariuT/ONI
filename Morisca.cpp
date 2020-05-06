#include <iostream>

using namespace std;

int main()
{
    int n = 0; cin >> n;
    int nr_spatii = n*3;
    int nr_spatii_spate = n;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            cout << '*';
        }
        for(int j = 4*n-2*i;j > n;j--) cout << ' ';
        for(int j = 1;j <= i;j++)
        {
            cout << '*';
        }
        nr_spatii -= 2;
        cout << '\n';
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++) cout << ' ';
        for(int j = 1;j <= n;j++)
        {
            cout << '*';
        }
        for(int j = 1;j <= n;j++) cout << ' ';
        cout << '\n';
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n-i+1;j++)
        {
            cout << '*';
        }
        for(int j = 1;j <= n+2*i-2;j++) cout << ' ';
        for(int j = 1;j <= n-i+1;j++)
        {
            cout << '*';
        }
        //if(i == 1) break;
        //nr_spatii_spate += 2;
        cout << '\n';
    }
    return 0;
}
