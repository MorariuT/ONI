#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("multimi2.in");
ofstream fout("multimi.out");
int main()
{





    int c = 0;
    fin >> c;
    if(c == 2)
    {
        int n = 0;
    int m = 0;
    int p1 = 0;
    int p2 = 0;
    //fin >> n;

    int i = 0;
    int j = 0;
    fin >> n >> p1 >> m >> p2;
    int index_m1 = 0;
    int index_m2= 0;
    int m1[n];
    int m2[m];
    while(i < n)
    {
        m1[index_m1++] = p1+i;
        i++;
    }
    while(j < m)
    {
        m2[index_m2++] = p2+j;
        j++;
    }




    int g = 0;
    int h = 0;
    int y = 0;
    while(y < n)
    {
        int q = 0;
        while(q < m)
        {
            if(m1[y] == m2[q])
            {
                fout << m1[y] << " ";
            }
            q++;
        }
        y++;
    }
    }

    if(c == 1)
    {
    int n = 0;
    int m = 0;
    int p1 = 0;
    int p2 = 0;
    //fin >> n;

    int i = 0;
    int j = 0;
    fin >> n >> p1 >> m >> p2;
    int index_m1 = 0;
    int index_m2= 0;
    int m1[n];
    int m2[m];
        int index = 0;
    int lista_reunita[n+m];
    int am_gasit = 0;
    int b = 0;

    while(i < n)
    {
        m1[index_m1++] = p1+i;
        i++;
    }
    while(j < m)
    {
        m2[index_m2++] = p2+j;
        j++;
    }
    while(b < n+m)
    {
        lista_reunita[b] = -1;
        b++;
    }
    int t = 0;
    while(t < n)
    {
        int k = 0;
        am_gasit = 0;
        while(k < index)
        {
            if(m1[t] == lista_reunita[k])
            {
                am_gasit = 1;
            }
            k++;
        }
        if(am_gasit == 0)
        {
           // cout << "adaugam m1[t] = "  << m1[t] << endl;
            lista_reunita[index++] = m1[t];
        }
        t++;
    }
    //cout << "index = " << index << endl;

    t = 0;
    while(t < m)
    {
        int k = 0;
        am_gasit = 0;
        while(k < index)
        {
            if(m2[t] == lista_reunita[k])
            {
                am_gasit = 1;
            }
            k++;
        }
        if(am_gasit == 0)
        {
            lista_reunita[index++] = m2[t];
        }
        t++;
    }





    //cout << "%%%%%%%%%%" << endl;

    int v = 0;
    while(v < index)
    {
        fout << lista_reunita[v] << " ";
        v++;
    }
    }

    return 0;
}
