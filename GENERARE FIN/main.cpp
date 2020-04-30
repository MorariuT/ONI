#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("out.out");
int main()
{
    fout << 1 << endl << 10 << endl;
    for(int i = 1;i <= 10;i+=1)
    {
        fout << i+1 << " " << endl;;
    }
    cout << "Hello world!" << endl;
    return 0;
}
