#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("palindrom2.in");
ofstream fout("palindrom2.out");
int main()
{

     int t = 0;
     fin >> t;
     if(t == 1)
     {
         int i = 1;
         int n = 0;
         int num = 0;
         fin >> n;
         int nr_citit = 0;
         while(i <= n)
         {
                 fin >> nr_citit;
                 int nr_citit_temp = nr_citit;
                 int nr_nou = 0;
                 int cifra = 0;
                 while(nr_citit_temp > 0)
                 {
                     cifra = nr_citit_temp%10;
                     nr_citit_temp = nr_citit_temp/10;
                     nr_nou = nr_nou*10+cifra;
                 }
                 if(nr_citit == nr_nou) num++;
                 i++;
             }
             fout << num;
         }
         else if(t == 2)
         {
             int n = 0;
             fin >> n;

             int i = 1;
             int num_pa = 0;
             int nr_citit = 0;
             while(i <= n)
             {
                 fin >> nr_citit;
                 int nr_citit_2 = nr_citit;
                 int c1 = 0,c2 = 0,c3 = 0,c4 = 0,c5 = 0,c6 = 0,c7 = 0,c8 = 0,c9 = 0,c10 = 0;
                 int num = 0;
                 while(nr_citit > 0)
                 {
                     num++;
                     nr_citit = nr_citit/10;
                 }
                 //cout << nr_citit_2 << " num = " << num << " ";
             if(num == 2)
             {
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 if(c1 != c2) num_pa++;
             }
            else if(num == 3)
             {
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 c3 = (nr_citit_2/100)%10;
                 if(c1 != c3) num_pa++;
             }
             else if(num == 4)
             {
                // cout << " am_intrat ";
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 c3 = (nr_citit_2/100)%10;
                 c4 = (nr_citit_2/1000)%10;
                 //cout << "c1 = " << c1 << " c2 = " << c2 << " c3 = " << c3 << " c4 = " << c4 << endl;
                 if(c1 != c4 && c2 == c3)
                 {
                     num_pa = num_pa+1;
                    // cout << "am intrat " << endl << num_pa << endl;
                 }
             }
             else if(num == 5)
             {
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 c3 = (nr_citit_2/100)%10;
                 c4 = (nr_citit_2/1000)%10;
                 c5 = (nr_citit_2/10000)%10;
                 if(c1 != c5 && c2 == c4 || c1 == c5 && c2 != c4) num_pa++;
             }
            else if(num == 6)
             {
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 c3 = (nr_citit_2/100)%10;
                 c4 = (nr_citit_2/1000)%10;
                 c5 = (nr_citit_2/10000)%10;
                 c6 = (nr_citit_2/100000)%10;
                 if((c1 == c6 && c2 == c5 && c3 != c4) ||
                    (c1 == c6 && c2 != c5 && c3 == c4) ||
                    (c1 != c6 && c2 == c5 && c3 == c4)) num_pa++;
             }
            else if(num == 7)
             {
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 c3 = (nr_citit_2/100)%10;
                 c4 = (nr_citit_2/1000)%10;
                 c5 = (nr_citit_2/10000)%10;
                 c6 = (nr_citit_2/100000)%10;
                 c7 = (nr_citit_2/1000000)%10;
                 if((c1 != c7 && c2 == c6 && c3 == c5) ||
                     (c1 == c7 && c2 != c6 && c3 == c5) ||
                     (c1 == c7 && c2 == c6 && c3 != c5)) num_pa++;
                 //if(c1 != c3) num_pa++;
             }
            else if(num == 8)
             {
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 c3 = (nr_citit_2/100)%10;
                 c4 = (nr_citit_2/1000)%10;
                 c5 = (nr_citit_2/10000)%10;
                 c6 = (nr_citit_2/100000)%10;
                 c7 = (nr_citit_2/1000000)%10;
                 c8 = (nr_citit_2/10000000)%10;
                 if((c1 != c8 && c2 == c7 && c3 == c6 && c4 == c5) ||
                    (c1 == c8 && c2 != c7 && c3 == c6 && c4 == c5) ||
                    (c1 == c8 && c2 == c7 && c3 != c6 && c4 == c5) ||
                    (c1 == c8 && c2 == c7 && c3 == c6 && c4 != c5))
                    num_pa++;
             }
            else if(num == 9)
             {
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 c3 = (nr_citit_2/100)%10;
                 c4 = (nr_citit_2/1000)%10;
                 c5 = (nr_citit_2/10000)%10;
                 c6 = (nr_citit_2/100000)%10;
                 c7 = (nr_citit_2/1000000)%10;
                 c8 = (nr_citit_2/10000000)%10;
                 c9 = (nr_citit_2/100000000)%10;
                 if((c1 != c9 && c2 == c8 && c3 == c7 && c4 == c6) ||
                    (c1 == c9 && c2 != c8 && c3 == c7 && c4 == c6) ||
                    (c1 == c9 && c2 == c8 && c3 != c7 && c4 == c6) ||
                    (c1 == c9 && c2 == c8 && c3 == c7 && c4 != c6))
                    num_pa++;
                 //if(c1 != c3) num_pa++;
             }
             else if(num == 10)
             {
                 c1 = nr_citit_2%10;
                 c2 = (nr_citit_2/10)%10;
                 c3 = (nr_citit_2/100)%10;
                 c4 = (nr_citit_2/1000)%10;
                 c5 = (nr_citit_2/10000)%10;
                 c6 = (nr_citit_2/100000)%10;
                 c7 = (nr_citit_2/1000000)%10;
                 c8 = (nr_citit_2/10000000)%10;
                 c9 = (nr_citit_2/100000000)%10;
                 c10 = (nr_citit_2/1000000000)%10;
                 if((c1 != c10 && c2 == c9 && c3 == c8 && c4 == c7 && c5 == c6) ||
                    (c1 == c10 && c2 != c9 && c3 == c8 && c4 == c7 && c5 == c6) ||
                    (c1 == c10 && c2 == c9 && c3 != c8 && c4 == c7 && c5 == c6) ||
                    (c1 == c10 && c2 == c9 && c3 == c8 && c4 != c7 && c5 == c6) ||
                    (c1 == c10 && c2 == c9 && c3 == c8 && c4 == c7 && c5 != c6)) num_pa++;
             }
             i++;
         }
         fout << num_pa;

     }
     if(t == 3)
     {
         int i = 1;
         int n = 0;
         fin >> n;
         int nr_citit = 0;
         while(i <= n)
         {
             fin >> nr_citit;
             while(true)
             {
                 nr_citit++;
                 int nr_citit_2 = nr_citit;
                 int cifre = 0;
                 int nr_inv = 0;
                 while(nr_citit > 0)
                 {
                     cifre = nr_citit%10;
                     nr_citit = nr_citit/10;
                     nr_inv = nr_inv*10+cifre;
                 }
                // cout << "nr_inv = " << nr_inv << " nr_citit_2 = " << nr_citit_2 << endl;
                 nr_citit = nr_citit_2;
                 if(nr_citit_2 == nr_inv)
                 {
                     fout << nr_citit_2 << " ";
                     //cout << "am_intrat" << endl;
                     break;
                 }
             }
             i++;
         }
     }
     return 0;
}
