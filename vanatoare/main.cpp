#include <iostream>

using namespace std;

int main()
{
    int ka,kb; cin >> ka >> kb;
    //cout << ka << " " << kb << endl;
    int suma_a = 0;
    int suma_n = 0;
    int t1 = 1;
    int num = 0;
    int sageti_albe_ramase = 0;
    int sageti_negre_ramase = 0;
    int albe_p = 0;
    int negre_p = 0;
    int t2 = 1;
    int a_p = 0;
    int n_p = 0;
    int u_t = 0;
    int suma_a_n_p = 0;
    while(true)
    {
        u_t = t1+t2;
        t1 = t2;
        num++;
        t2 = u_t;
        if(t1 % 2 == 0)
        {
            suma_a  = suma_a+t1/2;
            suma_n = suma_n+t1/2;
        }
        else if(t1 % 2 == 1)
        {
            suma_a = suma_a+(t1/2+1);
            suma_n = suma_n+t1/2;
        }
        //cout << "rate albe = " << suma_a << " rate negre = " << suma_n << " rate albe si rate negre = " << (suma_a+suma_n) <<  endl;
        //cout << "ap = " << a_p << " np = " << n_p << endl;
        albe_p = suma_a;
        negre_p = suma_n;
        if(suma_a >= ka || suma_n >= kb)
        {
           // cout << suma_a_n_p << endl;
            if(suma_a == ka || suma_n == kb) num = num;
            else num--;
            //cout << "ka = " << ka << " albe_p = " << albe_p << " negre_p = " << negre_p << endl;
            if(ka >= albe_p && kb >= negre_p)
            {
                sageti_albe_ramase = ka-albe_p;
                sageti_negre_ramase = kb-negre_p;
            }
            else
            {
                sageti_albe_ramase = ka-a_p;
                sageti_negre_ramase = kb-n_p;
            }
            break;
        }
        suma_a_n_p = suma_a+suma_n;
        //cout << albe_p << " " << negre_p << endl;
        a_p = suma_a;
        n_p = suma_n;
    }
    cout << num << endl << sageti_albe_ramase << endl << sageti_negre_ramase;
    return 0;
}
