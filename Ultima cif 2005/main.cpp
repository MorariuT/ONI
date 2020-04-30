#include <iostream>

using namespace std;

int main()
{
   long long int i = 1;
   long long int n = 0;
   long long
    int suma = 0;
    cin >> n;
    while(i <= n)
    {
        int c = 1;
        int putere_lui_i = 1;
        c = i%10;
        if(c == 1) suma = suma+1;

        if(c == 2 && i % 4 == 0) suma = suma + 6;
        if(c == 2 && i % 4 == 1) suma = suma + 2;
        if(c == 2 && i % 4 == 2) suma = suma + 4;
        if(c == 2 && i % 4 == 3) suma = suma + 8;

        if(c == 3 && i % 4 == 0) suma = suma + 1;
        if(c == 3 && i % 4 == 1) suma = suma + 3;
        if(c == 3 && i % 4 == 2) suma = suma + 9;
        if(c == 3 && i % 4 == 3) suma = suma + 7;

        if(c == 4 && i % 4 == 0) suma = suma + 6;
        if(c == 4 && i % 4 == 1) suma = suma + 4;
        if(c == 4 && i % 4 == 2) suma = suma + 6;
        if(c == 4 && i % 4 == 3) suma = suma + 4;

        if(c == 5 && i % 4 == 0) suma = suma + 5;
        if(c == 5 && i % 4 == 1) suma = suma + 5;
        if(c == 5 && i % 4 == 2) suma = suma + 5;
        if(c == 5 && i % 4 == 3) suma = suma + 5;

        if(c == 6 && i % 4 == 0) suma = suma + 6;
        if(c == 6 && i % 4 == 1) suma = suma + 6;
        if(c == 6 && i % 4 == 2) suma = suma + 6;
        if(c == 6 && i % 4 == 3) suma = suma + 6;

        if(c == 7 && i % 4 == 0) suma = suma + 1;
        if(c == 7 && i % 4 == 1) suma = suma + 7;
        if(c == 7 && i % 4 == 2) suma = suma + 9;
        if(c == 7 && i % 4 == 3) suma = suma + 3;

        if(c == 8 && i % 4 == 0) suma = suma + 6;
        if(c == 8 && i % 4 == 1) suma = suma + 8;
        if(c == 8 && i % 4 == 2) suma = suma + 4;
        if(c == 8 && i % 4 == 3) suma = suma + 2;

        if(c == 9 && i % 4 == 0) suma = suma + 1;
        if(c == 9 && i % 4 == 1) suma = suma + 9;
        if(c == 9 && i % 4 == 2) suma = suma + 1;
        if(c == 9 && i % 4 == 3) suma = suma + 9;
        i++;
    }
    cout << suma << endl << suma%10;
    return 0;
}
