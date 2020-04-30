#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("fibo0.in");
ofstream fout("fibo0.out");
int main()
{

    long long int a = 0; //fin >> a;
    int num = 0;
    long long int b = 0; //fin >> b;
   // int urmatorul_t = 0;
    while(true)
    {
        fin >> a;
        long long int fa = 0;
        long long int fb = 0;
        fin >> b;
        if(fin.eof()) break;
        int num_a = 1;
        int num_b = 1;
        long long int t1 = 1;
        long long int t2 = 1;
        long long int urmatorul_t = 0;
        long long int i = 1;
        long long int i2 = 1;
        while(true)
        {
//            cout << "num_a = " << num_a << " a = " << a << endl;
            if(num_a == a)
            {
                fa = t1;
  //              cout << "t1 a = " << t1 << endl;
    //            cout << "############################################3am_intrat a " << endl;
            }
//            cout << "num_b = " << num_b << " b = " << b << endl;
            if(num_b == b)
            {
                fb = t1;
  //              cout << "t1 b = " << t1 << endl;
    //            cout << "###########################################3am_intrat b " << endl;
            }
            num_a++;
            num_b++;
   //         cout << "t1 = " << t1 << endl;
            urmatorul_t = t1+t2;
            t1 = t2;
            t2 = urmatorul_t;
            if(num_a > a && num_b > b) break;

        }
        //cout << "fa = " << fa << " fb = " << fb << endl;
        if(fb % fa == 0)num++;
    }
    fout << num;
    return 0;
}
