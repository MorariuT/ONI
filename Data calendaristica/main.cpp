#include <iostream>

using namespace std;

int main()
{
    int z,l,a;
    cin >> z >> l >> a;
    if (z>31 || a%4==0 && l==2 && z>29 || a%4!=0 && l==2 && z>28 || l==4 && z>30 || l==6 && z>30 || l==8 && z>30 || l==9 && z>30 || l==11 && z>30 || z==0 || l==0) {
        cout << "Nu este corect." << endl;
    } else {
        cout << "Este corect." << endl;
    }
    return 0;
}
