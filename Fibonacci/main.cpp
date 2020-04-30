#include <iostream>

using namespace std;

int main()
{
    long long int n = 0; cin >> n;
    long long int t_1 = 1;
    long long int t_2 = 1;
    long long int urmatorul_t = 0;
    long long int i = 1;
    while(i <= n)
    {
        if(n >= t_1)
        {
            cout << t_1 << " ";
        }
        else
        {
            break;
        }
        urmatorul_t = t_1+t_2;
        t_1 = t_2;
        t_2 = urmatorul_t;
        i++;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
