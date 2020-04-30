#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("ore.in");
ofstream fout("ore.out");
int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    fin >> x;
    fin >> y >> z;
    if (x > y && x < z){
        fout << "Poate merge!";
    } else {
        fout << "Nu poate merge!";
    }

    return 0;
}
