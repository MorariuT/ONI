#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("");
ofstream fout("");
int main()
{
    int i = 1;
    int k = 0;
    cin >> k;
    while (i <= k)
    {
        cout << i << " " <<endl;
        while(i <= 2)

        {
            cout << i;
            i = i+1;
        }
        i = i+1;
    }
  //  cout << "Hello world!" << endl;
    return 0;
}
