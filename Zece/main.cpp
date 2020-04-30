#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zece.in");
ofstream fout("zece.out");
int main()
{
    int index = 1;
    int n = 0;
    fin >> n;
    int k = 0;
    int j = 1;
    while(j <= n)
    { //Pentru fiecare nr
        fin >> k;
        int i = 1;
        int f = 0;
        while(i <= k)
        {  //Pentru fiecare i
             int g = ((i-1)*i)/2  +1;
             //cout << "Suma = " << g << endl;
            if(k == g)
            {
                f = f+1;
            }
            else if (k != g)
            {
                f = f;
            }
            i = i+1;
        }
        if(f > 0)
        {
            fout << "1" << " ";
        }
        else if(f == 0)
        {
            fout << "0" << " ";
        }
        //index  = index+1;
        j = j+1;

    }
    cout << "Hello world!" << endl;
    return 0;
}
