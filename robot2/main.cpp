#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("robot.in");
ofstream fout("robot.out");
int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        int n = 0; fin >> n;
        int l1 = 0,l2 = 0;
    //    int num = 0;
        bool m[n][102];
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < 101;j++)
            {
                m[i][j] = 0;
            }
        }
        for(int i = 0;i < n;i++)
        {
            fin >> l1 >> l2;
            if(l1 > l2)
            {
                int aux = l1;
                l1 = l2;
                l2 = aux;;
            }
            m[l1+1][l2+1] = 1;
        }
        int num = 0;
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j <= 101;j++)
            {
                if(m[i][j] == 1) num++;
            }
        }
        fout << num;
    }
    return 0;
}
