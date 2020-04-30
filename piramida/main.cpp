#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("piramida.in");
ofstream fout("piramida.out");
int main()
{
    int p = 0;
    int n = 0; fin >> n;
    fin >> p;
    if(p == 1)
    {
        int i = 1;
        int nr_citit = 0;
        int l_num[9];
        int index = 0;
        int max = 0;
        int y = 0;
        while(y <= 9)
        {
            l_num[y] = 0;
            y++;
        }
     //   int num1 = 0,num2 = 0,num3 = 0,num4 = 0,num5 = 0,num6 = 0,num7 = 0,num8 = 0,num9 = 0;
        while(i <= n)
        {
            fin >> nr_citit;
            if(nr_citit >= 1 && nr_citit < 3) l_num[0]++;
            else if(nr_citit >= 3 && nr_citit < 9) l_num[1]++;
            else if(nr_citit >= 9 && nr_citit < 16) l_num[2]++;
            else if(nr_citit >= 16 && nr_citit < 25) l_num[3]++;
            else if(nr_citit >= 25 && nr_citit < 36) l_num[4]++;
            else if(nr_citit >= 36 && nr_citit < 49) l_num[5]++;
            else if(nr_citit >= 49 && nr_citit < 64) l_num[6]++;
            else if(nr_citit >= 64 && nr_citit < 81) l_num[7]++;
            else if(nr_citit >= 81 && nr_citit < 100) l_num[8]++;
            else if(nr_citit >= 100 && nr_citit < 121) l_num[9]++;
            i++;
        }
        int j = 0;
        //cout << "l_num[3] = " << l_num[3] << endl;
        while(j < 9)
        {
            cout << "j w = " << j << " " << l_num[j] << endl;
            if(l_num[j] != 0)
            {
                max = l_num[j];
                cout << j << endl;
                index = j;
            }
            j++;
        }
        fout  << index+1 << " " << max;
    }
    if(p == 2)
    {

        int i = 1;
        int suma = 0;
        int nr_citit = 0;
        int l_num[9];
        int index = 0;
        int max = 0;
        int y = 0;
        while(y <= 9)
        {
            l_num[y] = 0;
            y++;
        }
     //   int num1 = 0,num2 = 0,num3 = 0,num4 = 0,num5 = 0,num6 = 0,num7 = 0,num8 = 0,num9 = 0;
        while(i <= n)
        {
            fin >> nr_citit;
            suma = suma+nr_citit;

            i++;
        }
        if(suma >= 1 && suma < 3)
            {
                fout << "1";
            }
            else if(suma >= 3 && suma < 9)
            {
                fout << "2";
            }
            else if(suma >= 9 && suma < 16)
            {
                fout << "3";
            }
            else if(suma >= 16 && suma < 25)
            {
                fout << "4";
            }
            else if(suma >= 25 && suma < 36)
            {
                fout << "5";
            }
            else if(suma >= 36 && suma < 49)
            {
                fout << "6";
            }
            else if(suma >= 49 && suma < 64)
            {
                fout << "7";
            }
            else if(suma >= 64 && suma < 81)
            {
                fout << "8";
            }
            else if(suma >= 81 && suma < 100)
            {
                fout << "9";
            }
            else if(suma >= 100 && suma < 121)
            {
                fout << "10";
            }
    }
    if(p == 3)
    {
        int l[10] = {1,4,9,16,25,36,49,64,81,100};
        int l_2[9] = {2,6,12,20,30,42,56,70,86};
        int i = 1;
        int suma = 0;
        int nr_citit = 0;
        int am_gasit = 0;
        while(i <= n)
        {
            cout << "##############################################" << endl;
            fin >> nr_citit;
            int dif = 0;
            int dif2 = 0;
            int j = 1;
            while(j <= 9)
            {
                    cout << "l[J] = " << l[j] << " nr_citit = " << nr_citit << endl;
                    if(l[j] == nr_citit)
                    {
                        cout << "NR este corect" << endl;
                        break;
                    }
                    else if(l[j] > nr_citit)
                    {
                        dif = nr_citit - l[j-1];
                        cout << "$$$$$$$$$$dif de l[j] = " << dif << endl;
                        break;
                    }
                    j++;
            }
            j = 1;
            while(j <= 8)
            {
                    cout << "j = " << j << " l_2[J] = " << l_2[j] << " nr_citit = " << nr_citit << endl;
                    if(l_2[j] == nr_citit)
                    {
                        cout << "NR este corect" << endl;
                        break;
                    }
                    else if(l_2[j] > nr_citit)
                    {
                        dif2 = nr_citit - l_2[j-1];
                        cout << "$$$$$$$$$$dif2 de l_2[j] = " << dif2 << endl;
                        break;
                    }
                    j++;
            }
            if(dif2 < dif && dif2>=0)
            {
                suma += dif2;
            }
            if(dif2 > dif && dif>=0)
            {
                suma += dif;
            }
            cout << "&&&&&&&&&&&&&&&&&&suma = " << suma << endl;
            i++;
        }
        fout << suma << endl;
    }
    return 0;
}
