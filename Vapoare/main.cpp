#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("vapoare.in");
ofstream fout("vapoare.out");
int main()
{
    long long int x,y; fin >> x >> y;
    int z1,z2; fin >> z1 >> z2;
    long long int num_z_v1 = (x*7)*2+z1;
    long long int num_z_v2 = (y*7)*2+z2;
   // cout << "num_z_v1 = " << num_z_v1 << " num_z_v2 = " << num_z_v2 << endl;
    long long int cmmmc = 0;
    long long int num_c = num_z_v1*num_z_v2;
    long long int cmmdc = 0;
    long long int c;
    while(num_z_v2)
    {
        c = num_z_v1%num_z_v2;
        num_z_v1 = num_z_v2;
        num_z_v2 = c;
    }
    cmmdc = num_z_v1;
    cmmmc = num_c/cmmdc;
    fout << cmmmc << endl;
    return 0;
}
