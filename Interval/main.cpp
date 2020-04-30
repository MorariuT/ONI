#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("interval.in");
ofstream fout("interval.out");

int main()
{
    //1.
    int n = 0;

    //2.
    fin >> n;

    //3.
    if (n >= 10 && n <= 20) {
        fout << "DA";
    } else {
        fout << "NU";
    }


    return 0;
}
