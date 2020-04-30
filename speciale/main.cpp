#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("speciale.in");
ofstream fout("specie.out");
int main()
{
    int c = 0;
    fin >> c;
    if(c == 1)
    {
    int k,n,a,b;
    fin >> k >> n >> a >> b;
    ////////////////////////////////////////////////////////////////////A
    if(k == 1) fout << "9" << endl;;
    if(k == 2) fout << "98" << endl;;
    if(k == 3) fout << "987" << endl;;
    if(k == 4) fout << "9876" << endl;;
    if(k == 5) fout << "98765" << endl;;
    if(k == 6) fout << "987654" << endl;;
    if(k == 7) fout << "9876543" << endl;;
    if(k == 8) fout << "98765432" << endl;;
    if(k == 9) fout << "987654321" << endl;
    }
    ////////////////////////////////////////////////////////////////////B
    else if(c == 2)
    {
    int k,n,a,b;
    fin >> k >> n >> a >> b;
    int num = 0;
    int nr_nou = 0;
    int i = 1;
    while(n > 0)
    {
        num = num+1;
        n = n/10;
    }
    while(i < num)
    {
        nr_nou = nr_nou*10+i;
        i++;
    }
    fout << nr_nou << endl;
    }
    /////////////////////////////////////////////////////////////////C
    if(c == 3)
    {
        int k,n,a,b;
        int num = 0;
        fin >> k >> n >> a >> b;
        while(a <= b)
        {
            if(a == 1) num++;
            if(a == 12) num++;
            if(a == 123) num++;
            if(a == 1234) num++;
            if(a == 12345) num++;
            if(a == 123456) num++;
            if(a == 1234567) num++;
            if(a == 12345678) num++;
            if(a == 123456789) num++;
            if(a == 9) num++;
            if(a == 98) num++;
            if(a == 987) num++;
            if(a == 9876) num++;
            if(a == 98765) num++;
            if(a == 987654) num++;
            if(a == 9876543) num++;
            if(a == 98765432) num++;
            if(a == 987654321) num++;
            a++;
        }
        cout << num;
    }
    return 0;
}
