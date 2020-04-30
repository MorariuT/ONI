#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pinguini.in");
ofstream fout("pinguini.out");
int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        int n = 0; fin >> n;
        int nr_stare = 0;
        int nr_pinguini = 0;
        int num = 0;
        for(int i = 0;i < n;i++)
        {
            fin >> nr_stare;
            if(nr_stare == 2)
            {
                nr_pinguini++;
            }
            else
            {
                num++;
            }
        }
        fout << nr_pinguini << endl;
    }
    if(cer == 2)
    {
        int n = 0; fin >> n;
        int nr_stare = 0;
        int num = 0;
        int fleg = 1;
        int nr_pinguini = 0;
        for(int i = 0;i < n;i++)
        {
            fin >> nr_stare;
            if(nr_stare == 2)
            {
                nr_pinguini++;
                fleg = 0;
            }
            if(nr_stare == 1 && fleg == 0)
            {
                num++;
                fleg = 1;
            }
        }
        if(nr_stare == 2)
        {
            fout << num+1 << endl;
        }
        else fout << num << endl;
    }
    if(cer == 3)
    {
        int n = 0; fin >> n;
        int nr_stare = 0;
        int num = 0;
        int fleg = 0;
        int num_max = 0;
        int nr_pinguini = 0;
        for(int i = 0;i < n;i++)
        {
            fin >> nr_stare;
            if(nr_stare == 2)
            {
                //if(num_max < nr_pinguini) num_max = nr_pinguini;
                nr_pinguini++;
            }
           // if(num_max < nr_pinguini) num_max = nr_pinguini;
            else
            {
                if(num_max < nr_pinguini) num_max = nr_pinguini;
                nr_pinguini = 0;
            }
        }
        if(num_max < nr_pinguini) num_max = nr_pinguini;
        fout << num_max << endl;
    }
    return 0;
}
