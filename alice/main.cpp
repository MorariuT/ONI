#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("alice.in");
ofstream fout("alice.out");
int main()
{
    int n,k;
    fin >> n >> k;
    int i = 1;
    int num_break = 0;
    int nr_citit = 0;
    int cifre_2 = 0;
    int num = 0;
    while(i <= n)
    {
        fin >> nr_citit;
        int nr_citit_2 = nr_citit;
        int max = 0;

        cout << nr_citit << " ";
        int nr_citit_temp = nr_citit;
        int cife = 0;
        if(nr_citit % 2 == 0)
        {
            if(max < nr_citit)
            {
                max = nr_citit;
            }
        }





            while(true)
            {
                int nr_nou = 0;
                int maxi = 0;
                int am_gasit = 0;
                int nr_citit_temp2 = nr_citit_temp;
                int nr_citit_temp3 = nr_citit_temp;

                 while(nr_citit_temp2 > 0)
                {
                    cife = nr_citit_temp2%10;
                    nr_citit_temp2 = nr_citit_temp2/10;
                    if(cife > maxi)
                    {
                        maxi = cife;
                    }
                }
                cout<< "nr_citit_temp=" << nr_citit_temp << endl;
                if(nr_citit_temp < 10)
                {
                    if(nr_citit_temp == k) {
                     cout << "###########################  nr_nou = " << nr_citit_temp << endl;


                            num++;
                    }
                }


                while(nr_citit_temp > 0)
                {
                    cifre_2 = maxi - nr_citit_temp % 10;
                    nr_citit_temp = nr_citit_temp/10;
                    nr_nou = nr_nou*10+cifre_2;
                }

                cout << ">>>>>>>>>>>>>>>>" << nr_nou<<endl;


                int nr_nou_inv = 0;
                int cifre_3 = 0;
                int nr_nou_temp=nr_nou;
                while(nr_nou > 0)
                {
                    cifre_3 = nr_nou % 10;
                    nr_nou = nr_nou/10;
                    nr_nou_inv = nr_nou_inv*10+cifre_3;

                }
                cout << "maxi = " << maxi << " " << "numar citit 2 = " << nr_citit_2;
                if(maxi == nr_citit_temp3%10)
                    {
                        nr_nou_inv = nr_nou_inv*10;
                    }
                    nr_citit_temp = nr_nou_inv;
                cout << "nr_nou_inv= " << nr_nou_inv << endl;
                num_break++;

                if(num_break == 10) break;
                if(nr_citit_temp3 == 0) break;
            }
            //cout << num;

            i++;
    }
    cout << num;

    return 0;
}
