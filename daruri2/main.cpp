#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("daruri.in");
ofstream fout("daruri.out");



int main()
{
    int l1 = 0,l2 = 0; fin >> l1 >> l2;
    int l1_2 = l1,l2_2 = l2;
    int c = 0;
    if(l1 <= l2)
    {
        while(l1)
        {
            c = l2%l1;
            l2 = l1;
            l1 = c;
        }
        if(l2 > 1) fout << l2 << endl << l1_2/l2 << " " << l2_2/l2;
        else fout << 0 << endl << 0 << " " << 0;
    }
    if(l2 <= l1)
    {
        while(l2)
        {
            c = l1%l2;
            l1 = l2;
            l2 = c;
        }
        if(l1 > 1) fout << l1 << endl << l1_2/l1 << " " << l2_2/l1;
        else fout << 0 << endl << 0 << " " << 0;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
