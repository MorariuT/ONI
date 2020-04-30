#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    cout << "Numarul este:";
    cin >> n;
    n1 = n/1000;
    n2 = n%1000/100;
    n3 = n%1000%100/10;
    n4 = n%1000%100%10;
    if (n>999 && n<10000) {
    if (n1%2==0 && n2%2==0 && n3%2==0 && n4%2==0){
        cout << n << " are 4 cifre pare";
    } else if (n1%2==0 && n2%2==0 && n3%2==0 || n2%2==0 && n1%2==0 && n4%2==0 || n1%2==0 && n4%2==0 && n3%2==0 || n2%2==0 && n3%2==0 && n4%2==0) {
        cout << n << " are 3 cifre pare";
    } else if (n1%2==0 && n2%2==0 || n1%2==0 && n3%2==0 || n1%2==0 && n4%2==0 || n2%2==0 && n3%2==0 || n3%2==0) {
        cout << n << " are 2 cifre pare";
    } else if (n1%2==0 || n2%2==0 || n3%2==0 || n4%2==0) {
        cout << n << " are o cifra para.";
    } else if (n1%2!=0 || n2%2!=0 || n3%2!=0 || n4%2!=0) {
        cout << n << " nu are cifre pare.";
    } // tanta e gay
    return 0;
} else {
    cout << "Un numar de patru cifre , VA ROG!";
}
}
