#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Da un numar:" << endl;
    cin >> n;
    //cout << i;

    for (int j=0;j<n;j++){
        if (j%2==1){
            cout << j << " ";
        }
    }
    return 0;
}
