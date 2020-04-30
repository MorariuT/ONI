#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int baza = 2;
    int putere_curenta = 0;
    int suma_baza_10 = 0;
    int c = 0;
    cin >> n;
    cin >> baza;
    while(n > 0)
    {
        c = n%10;
        n = n/10;
        int j = 0;
        int rezultat_putere = 1;
        while(j < putere_curenta)
        {
            rezultat_putere = rezultat_putere*baza;
            j = j+1;
        }
        cout << "cifra curenta=" << c << " puterea curenta=" <<putere_curenta << " rezultat_putere=" << rezultat_putere << endl;
        suma_baza_10 = suma_baza_10+c*rezultat_putere;
        putere_curenta = putere_curenta+1;
    }

    cout << suma_baza_10 << endl;
    return 0;
}
