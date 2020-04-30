#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("n311.in");
ofstream fout("n311.out");
int main()
{
    long long int n = 1;
    int am_intrat = 0;
    long long int n2 = 0; fin >> n2;
    long long int precedent = 0;
    long long num = 0;
    long long int precedent2 = 0;
    if(n2 % 3 == 0)
    {
        while(true)
        {
            if(n2%3 == 0) num++;
            n2 /= 3;
            if(n2%3 != 0) break;
        }
        for(int i = 1;i <= n2;i++)
        {
            cout << "1 ";
        }
        for(int i = 1;i <= num;i++)
        {
            cout << "3 ";
        }
    }
    else if(n2 % 3 == 1)
    {
        while(true)
        {
            if((n2-1)%3 == 0) num++;
            n2 /= 3;
            if((n2-1)%3 != 0) break;
        }
        cout << "num = " << num << endl;
        for(int i = 1;i <= n2+1;i++)
        {
            cout << "1 ";
        }
        for(int i = 1;i <= num;i++)
        {
            cout << "3 ";
        }
    }
    else if(n2 % 3 == 2)
    {
        while(true)
        {
            while(true)
            {
                if((n2-2)%3 == 0) num++;
                n2 /= 3;
                if((n2-2)%3 != 0) break;
            }
            n2--;
            cout << "-1 ";
            if(n2 == 0) break;
        }
        cout << "num = " << num << " n2 = " << n2 << endl;
        for(int i = 0;i < n2+2;i++)
        {
            cout << "1 " << endl;
        }
        for(int i = 1;i <= num;i++)
        {
            cout << "3 ";
        }
        cout << "-1 -1 ";
    }

    return 0;
}

