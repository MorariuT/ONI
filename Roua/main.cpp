#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("roua.in");
ofstream fout("roua.out");
int main()
{
    int c = 0; fin >> c;
    if(c == 1)
    {
        int n = 0,r = 0; fin >> n >> r;
        int i = 0;
        char* v = new char[n];
        char s;
        while(i < n)
        {
            fin >> s;
            v[i] = s;
            i++;
        }
        i = 0;
        int num = 0;
        while(i < n)
        {
            //cout << v[i] << " ";
            int j = 0;
            int nu_e_bine = 0;
            int num_r = 0;
            int num_se = 0;
            //short* l = new short[r];
            while(j < r)
            {

                if(v[i+j] == 'r' && v[j+i] > 0) num_r++;
          //      cout << v[j+i] << " ";
                //cout << "num_r = " << num_r << endl;

                if(v[i+j] == 'v' || v[i+j] == 'r' || v[i+j] == 'g' || v[i+j] == 'a') num_se++;
                //l[j] = v[j+i];
                //cout << "num_r = " << num_r << endl;
                if(num_r > r-1) nu_e_bine = 1;

                j++;
            }
      //      cout << " num se = " << num_se << endl;
            //cout << "nu_e_bine = " << nu_e_bine << endl;
            v[i] = -1;
            if(nu_e_bine == 0 && num_se == r && num_r == r-1) num++;
            // cout << num_se << endl;
            num_se = 0;
            i++;
        }
        fout << num << endl;
        delete v;
    }
    if(c == 2)
    {
        int n = 0,r = 0; fin >> n >> r;
        int i = 0;
        char* v = new char[n];
        i = 0;
        int num = 0;
        while(i < n)
        {
            //cout << v[i] << " ";
            int j = 0;
            int nu_e_bine = 0;
            int num_r = 0;
            int num_se = 0;
            //short* l = new short[r];
            while(j < r)
            {

                if(v[i+j] == 'r' && v[j+i] > 0) num_r++;
          //      cout << v[j+i] << " ";
                //cout << "num_r = " << num_r << endl;

                //if(v[i+j] == 'v' || v[i+j] == 'r' || v[i+j] == 'g' || v[i+j] == 'a') num_se++;
                //l[j] = v[j+i];
                //cout << "num_r = " << num_r << endl;
                if(num_r > r-1) nu_e_bine = 1;

                j++;
            }
      //      cout << " num se = " << num_se << endl;
            //cout << "nu_e_bine = " << nu_e_bine << endl;
            v[i] = -1;
            if(num_r < r) num++;
            // cout << num_se << endl;
            i++;
        }
        fout << num << endl;
        delete v;
    }
    return 0;
}
