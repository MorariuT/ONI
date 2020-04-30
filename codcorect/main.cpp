#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("codcorect.in");
ofstream fout("codcorect.out");
int main()
{
    int n = 0; fin >> n;
    int nr_citit = 0;
    int i = 1;
    while(i <= n)
    {
        //cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        fin >> nr_citit;
        int nr_citit2 = nr_citit;
        int pc = 0;
        int uc = 0;
        int num_cif = 0;
        while(nr_citit)
        {
            num_cif++;
            nr_citit = nr_citit/10;
        }
        int puterea_10 = 1;
        int num_cif_2 = num_cif;
        while(num_cif_2-1)
        {
            puterea_10 = puterea_10*10;
            num_cif_2--;
        }
       // cout << "puterea_10 = " << puterea_10 << endl;
        pc = nr_citit2/puterea_10;
        uc = nr_citit2%10;
      //  cout << "prima cif = " << pc << " ultima cif = " << uc << endl;
      cout << "num_cif = " << num_cif << endl;
      if(num_cif % 2 == 0) fout << nr_citit2;
      else if(num_cif % 2 == 1)
      {
          if(pc >= uc)
            {
                fout << nr_citit2 << " ";
            }
            else if(uc > pc)
            {
    //            cout << "####################" << nr_citit2 << endl;
                nr_citit2 = nr_citit2/10;
                nr_citit2 = nr_citit2-pc*(puterea_10/10);
                nr_citit2 = nr_citit2*10+pc;
                nr_citit2 = nr_citit2+uc*puterea_10;
                fout << nr_citit2 << " ";
            }
      }

        i++;
    }
   // cout << "Hello world!" << endl;
    return 0;
}
