#include <iostream>

using namespace std;

int main()
{
int suma = 0;
int a = 0;
int b = 0;
int c = 0;
int n = 0;
int m = 0;
int p = 0;
cout << "Cat valoreaza prima moneda: ";
cin >> a;
cout << "Cat valoreaza a doua moneda: ";
cin >> b;
cout << "Cat valoreaza a treia moneda: ";
cin >> c;
cout << "Cati bani are Iggle din primul tip: ";
cin >> n;
cout << "Cati bani are Iggle din al doilea tip: ";
cin >> m;
cout << "Cati bani are Iggle din al treilea tip: ";
cin >> p;
suma = a*n + b*m + c*p;
cout << "Iggle are: " << suma;

}
