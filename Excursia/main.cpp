#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int a = 0;
    int i = 1;
    cin >> n;
    int succesor = 0;
    int cifra_uniatiilor,cifra_zeciilor;
    int produs_2 = 0;
    int produs = 0;
    int num = 0;
    while(i <= n)
    {
        cin >> a;
        int a2 = a;
        cifra_uniatiilor = a%10;
        cifra_zeciilor = (a/10)%10;
        succesor = cifra_uniatiilor+cifra_zeciilor+1;
        produs = (cifra_uniatiilor + cifra_zeciilor)*(cifra_zeciilor + cifra_uniatiilor);
        produs_2 = (cifra_uniatiilor + cifra_zeciilor) * succesor;
        if((a2 == produs) || (a2 == produs_2))
        {
            num = num+1;
        }
        i  = i+1;
    }
    cout << num << endl;
    return 0;
}
