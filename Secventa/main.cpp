#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secventa.in");
ofstream fout("secventa.out");
int main()
{
    int n = 0;
    int i = 1;
    int m = 0;
    int num = 1;
    int vp = 0;
    int maxi = 0;
    int lungimea = 0;
    fin >> n;
    while(i <= n)
    { //Pentu fiecare cifra a secventei
        fin >> m;
       // lungimea = 0;
        int d = vp-1;
        lungimea = lungimea+1;
        if(m == d)
        {
            cout << maxi << " ";    // lu = 1 //1
            num = num+1;

            if (lungimea > maxi)
            {
                maxi = lungimea;

            }
            lungimea = 0;
        }

        vp = m;
        i = i+1;
    }
    fout << num << endl << maxi << endl;
    return 0;
}
