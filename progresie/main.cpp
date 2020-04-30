#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("progresie.in");
ofstream fout("progresie.out");
int main()
{
   //1.
   int n = 0;
   //2
   fin >> n;
   //3
   int i = 1;
   long long int s = 0;
   while(i <= n)
   { //Pentru fiecare nr i pana la n
       int j = 1;
       int p = 1;
       while(j <= i)
       {    // Pentru fiecare nr j pana la i
           p = p*i;
           j = j+1;
       }
       s = s+p;
       i = i+1;
       cout << s << endl;
   }
    fout << s;
    return 0;
}
