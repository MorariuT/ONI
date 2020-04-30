#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bona.in");
ofstream fout("bona.out");
int main()
{
    int n = 0,m = 0; fin >> n >> m;
    int v[n+1][n+1];
    int l[m][4];
    for(int i = 0; i < n+1;i++)
    {
        for(int j = 0;j < n+1;j++)
        {
            v[i][j] = 0;
           // cout << v[i][j] << " ";
        }
       // cout << endl;
    }
    //cout << endl;
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            fin >> l[i][j];
        }
    //    cout << endl;
    }
    //cout << endl;
    for(int i = 0; i < n+1;i++)
    {
        v[l[i][0]][l[i][1]] = 1;
    //    cout << endl;
    }
    /*
    for(int i = 0;i < n+1;i++)
    {
        for(int j = 0;j < n+1;j++)cout << v[i][j] << " ";
//        cout << endl;
    }
    */
    int num = 0;
    int aux1 = 0;
    int num_mutatri = 0;
    int aux2 = 0;
    //cout << endl;
    for(int i = 0;i < m;i++)
    { //pt fiecare operatie
        if(v[l[i][2]][l[i][3]] == 0)
        {
            //cout << "e bine " << l[i][0] << " " << l[i][1] << " " << l[i][2] << " " << l[i][3] << endl;
            v[l[i][0]][l[i][1]] = 0;
            v[l[i][2]][l[i][3]] = 1;
            num_mutatri++;
            if(aux1 == l[i][0] && aux2 == l[i][1])
            {
                v[aux1][aux2] = 1;
                num_mutatri++;
                aux1 = 0;
                aux2 = 0;
            }
            num++;
        }
        else
        {
            //cout << "e rau" << endl;
            aux1 = l[i][2];
            aux2 = l[i][3];
            num_mutatri++;
            v[l[i][0]][l[i][1]] = 0;
        }
        //cout << endl;
        //cout << "aux1 = " << aux1 << " aux2 = " << aux2 << endl;
        /*
        for(int i = 0;i < n+1;i++)
        {
            for(int j = 0;j < n+1;j++) cout << v[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        */
    }
    fout << num << endl << num_mutatri;
    return 0;
}
