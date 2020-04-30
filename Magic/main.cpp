#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("magic.in");
ofstream fout("magic.out");
int main()
{
    int n = 0;
    fin >> n;
    int mini = 2147483647;
    int maxi = 0;
    int i = 1;
    char c = 0;
    int intermediar = 0;
    while(i <= n)
    {
        fin >> c;
        if(c >= 'a' && c <= 'z')
        {
            c = c-32;
            fout << c;
        }
        else if(c >= '0' && c <= '9')
        {
            int c_num = c - '0';
            if(c_num > maxi) maxi = c_num;
            if(c_num < mini) mini = c_num;
            if(maxi > c_num && mini < c_num) intermediar = c_num;
        }
        i++;
    }




    int am_gasit = 1;
    int num = 0;
    fin2 >> n;
    int min = 10;
    int min_prec = 0;
    while(am_gasit == 1)
    {
        min = 10;
        ifstream fin2("magic.in");
        int j = 1;
        while(j <= n)
        {
            fin2 >> c;
            if(c == 0 && num >= 1 && num <= 9 && am_gasit == 0) num = num*10;
            if(c < min && c > min_prec)
            {
                am_gasit = 1;
                num = num*10 + min;
                min = c;
                min_prec = c;

            }
            else
            {
                break;
            }
            j++;
        }
    }
    cout << num;
    return 0;
}
