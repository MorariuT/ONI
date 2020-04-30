#include <iostream>

using namespace std;

int main()
{
    int zp = 0;
    int lp = 0;
    int ap = 0;
    int zc = 0;
    int lc = 0;
    int ac = 0;
    int dif = 0;
    cout << "Care e ziua plantari:";
    cin >> zp;
    cout << "Care e luna plantarii:";
    cin >> lp;
    cout << "Care e anul plantarii:";
    cin >> ap;
    cout << "Care e ziua curenta:";
    cin >> zc;
    cout << "Care e luna curnta:";
    cin >> lc;
    cout << "Care e anul curent:";
    cin >> ac;
    dif = ac - ap;
    if (lp == lc){
        if (zp == zc)
        {
            cout << "Nucul are " << dif << " ani";
        }
        else
            if (zp > zc)
            {
            cout << "Nucul are " << dif << " ani";
            }
            else
            {
            cout << "Nucul are " << --dif << "ani";
            }
            {
        cout << "Nucul a trait:" << dif--;
            }
}else{
   if (lc > lp)
   {
       cout << "Nucul are " << dif << " ani";
   }else
   {
       cout << "Nucul are " << --dif << " ani";
   }

}
return 0;
}
