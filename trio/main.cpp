#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("trio.in");
ofstream fout("trio.out");

int main()
{
    int t = 0; fin >> t;
    if(t == 1)
    {
        int n = 0;
        fin >> n;
        int max = 0;
        short l[n][3];
        int i = 0;
        int am_numarat = 0;
        int num = 0;
        while(i < n)
        {
              fin >> l[i][0] >> l[i][1] >> l[i][2];
              i++;
        }


        i = 0;
        while(i < n)
        {
              // cout << l[i][0] << " " << l[i][1] <<" " << l[i][2]<< endl;
              i++;
        }

        i = 0;
        while(i < n)
        {
          //   cout << l[i][0] << " " << l[i][1] << " " << l[i][2] << endl;
            num = 0;
            //int a_p = 0,b_p = 0,c_p = 0;
           // cout << a << " "  << b << " " << c << endl;
            int j = i;
            while(j < n)
            {
                //fin2 >> a_p >> b_p >> c_p;
                //cout << "$$$$$$$$$$$$$$ap = " << a_p << " $$$$$$$$$$$$$$b_p = " << b_p << " $$$$$$c_p = " << c_p << endl;
                //cout << "$$$$$$$$$$$$$$a = " << a << " $$$$$$$$$$$$$$$$$b = " << b << " $$$$$$$$c = " << c << endl;;
                if((l[j][0] == l[i][0] && l[j][1] == l[i][1] && l[j][2] == l[i][2]) ||
                   (l[j][0] == l[i][2] && l[j][1] == l[i][1] && l[j][2] == l[i][0]))
                   {
                   //     cout << "am_intrat" << endl;
                        num++;
                   }
                j++;
            }

            if(num > max) {
                max = num;
            }

            i++;
        }
        fout << (max-1) << endl;
    }
    if(t == 2)
    {
        int n = 0; fin >> n;
        int l[n][4];
        int i = 0;
        while(i < n)
        {
            l[i][3] = -1;
      //      cout << l[i][3] << endl;
            i++;
        }
        i = 0;
        int g = 0;
        while(i < n)
        {
            fin >> l[i][0] >> l[i][1] >> l[i][2];
            i++;
        }
        i = 0;
        while(i < n)
        {
            int am_intrat = 0;
            if(l[i][3] == -1)
            {
                l[i][3] = g;
                int j = i;
                while(j < n)
                {
                    if(l[j][3] == -1)
                    {
                          if((l[j][0] == l[i][0] && l[j][1] == l[i][1] && l[j][2] == l[i][2]) ||
                             (l[j][0] == l[i][0] && l[j][1] == l[i][2] && l[j][2] == l[i][1]) ||
                             (l[j][0] == l[i][1] && l[j][1] == l[i][0] && l[j][2] == l[i][2]) ||
                             (l[j][0] == l[i][1] && l[j][1] == l[i][2] && l[j][2] == l[i][0]) ||
                             (l[j][0] == l[i][2] && l[j][1] == l[i][1] && l[j][2] == l[i][0]) ||
                             (l[j][0] == l[i][2] && l[j][1] == l[i][0] && l[j][2] == l[i][1]))
                             {
                                  l[j][3] = g;
                                  am_intrat = 1;
                             }
                    }
                            j++;
                }
            }
            if(am_intrat == 1) g++;
            i++;

        }
        i = 0;
        short l_num[g+1];
        while(i < g+1)
        {
              l_num[i] = 0;
              i++;
        }
        i = 0;
        while(i < g+1)
        {
            if(l_num[i] == i) l_num[i]++;
            i++;
        }
        fout << g << endl;
    }
    if(t == 3)
    {
        int n = 0; fin >> n;
        int l[n][4];
        int i = 0;
        while(i < n)
        {
            l[i][3] = -1;
           // cout << l[i][3] << endl;
            i++;
        }
        i = 0;
        int g = 0;
        while(i < n)
        {
            fin >> l[i][0] >> l[i][1] >> l[i][2];
            i++;
        }
        i = 0;
        while(i < n)
        {
            int am_intrat = 0;
            if(l[i][3] == -1)
            {
                l[i][3] = g;
                int j = i;
                while(j < n)
                {
                    if(l[j][3] == -1)
                    {
                          if((l[j][0] == l[i][0] && l[j][1] == l[i][1] && l[j][2] == l[i][2]) ||
                             (l[j][0] == l[i][0] && l[j][1] == l[i][2] && l[j][2] == l[i][1]) ||
                             (l[j][0] == l[i][1] && l[j][1] == l[i][0] && l[j][2] == l[i][2]) ||
                             (l[j][0] == l[i][1] && l[j][1] == l[i][2] && l[j][2] == l[i][0]) ||
                             (l[j][0] == l[i][2] && l[j][1] == l[i][1] && l[j][2] == l[i][0]) ||
                             (l[j][0] == l[i][2] && l[j][1] == l[i][0] && l[j][2] == l[i][1]))
                             {
                                  l[j][3] = g;
                                  am_intrat = 1;
                                  cout << "am_intrat = " << am_intrat << endl;
                             }
                    }
                    j++;

                }
                g++;
            }
            //if(am_intrat == 1) g++;
            i++;

        }



            int max_total =0;
            int j = 0;
            while(j < n)
            {
                //cout << "###################################" << endl;
              //  cout << "l[j][3] = " << l[j][3] << endl;
                i = j + 1;
                int secv_curenta = l[j][3];
                int ultima_poz_secv = 0;
                //cout << "secv_curenta = " << secv_curenta << endl;
                while(i < n)
                {
                    if (l[i][3] == secv_curenta)
                    {
                        ultima_poz_secv = i;
                    }
                    i++;
                }

                //cout << "j=" <<j << "  secv_curenta = " << secv_curenta << " ultimaPoz=" << ultima_poz_secv <<endl;
                if (ultima_poz_secv>0 && (ultima_poz_secv-j + 1) > max_total)
                {
                    max_total = (ultima_poz_secv-j + 1);
                }

            j++;
         }
        //max_s = max_s-1;
        fout << max_total << endl;
    }
    return 0;

}
