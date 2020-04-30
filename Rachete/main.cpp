#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("rachete.in");
ofstream fout("rachete.out");
int main()
{
    int n = 0;
    int k = 1;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int m = 0;
    fin >> m;
    while(k <= m)
    {
    fin >> n;
    if(n == 1)
    {
        num1 = num1+1;
    }
    if(n == 2)
    {
        num2 = num2+1;
    }
    if(n == 3)
    {
        num3 = num3+1;
    }
    k = k+1;
    }


    int i = 1;
    int j = 1;
    int y = 1;
    while(i <= num1)
    {
        fout << "1" << " ";
        i = i+1;
    }
    while(j <= num2)
    {
        fout << "2" << " ";
        j = j+1;
    }
    while(y <= num3)
    {
        fout << "3" << " ";
        y = y+1;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
