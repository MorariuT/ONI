#include <iostream>

using namespace std;

int main()
{
    int n = 0; cin >> n;
    int k = 1;
    int nr_patrat = 0;
    int precedent = 0;
    int am_intrat = 0;
    int precedent2 = 0;
    while(k < 30)
    {
        nr_patrat = k*k;
        if(nr_patrat > n)
        {
            if(n-precedent == 0)
            {
                cout << n-precedent2 << endl;;
                am_intrat = 1;
            }
            else
            {
                cout << n-precedent << endl;;
            }
            break;
        }
        //cout << precedent2 << " " << precedent << " " << nr_patrat << endl;
        precedent2 = precedent;
        precedent = nr_patrat;
        k++;
    }
    k--;
    //cout << " k^2 = " << precedent << endl;
    int p = 0;
    if(am_intrat == 1)
    {
        int i = 1;
        //int p = 0;
        while(i < precedent2)
        {
            //cout << "i*i = " << i*i << endl;
            if(i*i == precedent2)
            {
                p = i;
                break;
            }
            i++;
        }
        i = 0;
        int num_copii = 0;
        while(precedent2)
        {
            cout << precedent2 << " ";
            num_copii++;
            if(num_copii == p)
            {
                cout << endl;
                num_copii = 0;

            }
            precedent2

            --;
        }
    }
    else
    {
        int i = 1;
        //int p = 0;
        while(i < precedent)
        {
            //cout << "i*i = " << i*i << endl;
            if(i*i == precedent)
            {
                p = i;
                break;
            }
            i++;
        }
        i = 0;
        int num_copii = 0;
        while(precedent)
        {
            cout << precedent << " ";
            num_copii++;
            if(num_copii == p)
            {
                cout << endl;
                num_copii = 0;

            }
            precedent--;
        }
    }
    return 0;
}
