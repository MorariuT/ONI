#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("chibrituri.in");;
ofstream fout("chibrituri.out");;


int bete_v(int c)
{
    if(c == 0) return 4;
    if(c == 1) return 2;
    if(c == 2) return 2;
    if(c == 3) return 2;
    if(c == 4) return 3;
    if(c == 5) return 2;
    if(c == 6) return 3;
    if(c == 7) return 2;
    if(c == 8) return 4;
    if(c == 9) return 3;
}

int bete_o(int p)
{
    if(p == 0) return 2;
    if(p == 1) return 0;
    if(p == 2) return 3;
    if(p == 3) return 3;
    if(p == 4) return 1;
    if(p == 5) return 3;
    if(p == 6) return 3;
    if(p == 7) return 1;
    if(p == 8) return 3;
    if(p == 9) return 3;
}


int main()
{
    int vertical_0 = 4;
    int orizontal_0 = 2;

    int vertical_1 = 2;
    int orizontal_1 = 0;

    int vertical_2 = 2;
    int orizontal_2 = 3;

    int vertical_3 = 2;
    int orizontal_3 = 3;

    int vertical_4 = 3;
    int orizontal_4 = 1;

    int vertical_5 = 2;
    int orizontal_5 = 3;

    int vertical_6 = 3;
    int orizontal_6 = 3;

    int vertical_7 = 2;
    int orizontal_7 = 1;

    int vertical_8 = 4;
    int orizontal_8 = 3;

    int vertical_9 = 3;
    int orizontal_9 = 3;

    int v = 2; //pana la 4
    int o = 1; //pana la 3
    int vertical,orizontal;
    int suma_o_2 = 0;
        int suma_v_2 = 0;
    int i = 0;
    fin >> vertical >> orizontal;
    int ora_minima = 100;
    int minut_minima = 100;
    int num = 0;
    int ora_max = 0;
    int ora_min = 0;
    int mini = 99999;
    int nr = 0;
    while(i <= 23)
    {
        int u_cifre_j = 0;
        int penulima_cif = 0;
        int antepenultima_cif = 0;
          int j = 0;
        int prima_cif = 0;
        int c_v = bete_v(u_cifre_j);
        while(j <= 59)
        {
            /*
            if(i < 10 && j < 10)
            {
                cout << "0" << i << ":" << "0" << j << endl;
            }
            else if(i < 10 && j >= 10)
            {
                 cout << "0" << i << ":" << j << endl;
            }
            else if(i >= 10 && j < 10)
            {
                 cout << i << ":" << "0" << j << endl;
            }
            else if(i >= 10 && j >= 10)
            {
                 cout << i << ":" << j << endl;
            }
            */
            u_cifre_j = j%10;
            penulima_cif = (j/10)%10;
            antepenultima_cif = i%10;
            prima_cif = (i/10)%10;
            suma_o_2 = bete_o(u_cifre_j) + bete_o(penulima_cif) + bete_o(antepenultima_cif) + bete_o(prima_cif);
            suma_v_2 = bete_v(u_cifre_j) + bete_v(penulima_cif) + bete_v(antepenultima_cif) + bete_v(prima_cif);
           // cout << u_cifre_j << endl;
           //cout << suma_o_2 << " ora = " << prima_cif << antepenultima_cif << ":" << penulima_cif << u_cifre_j << endl;
           if(suma_o_2 == orizontal && suma_v_2 == vertical)
           {
               num++;
               ora_max = i;
               ora_min = j;
               //////
               if(ora_minima == 100 && minut_minima == 100)
               {
               ora_minima = i;
               minut_minima = j;
               }
           }
           //cout << "nr = " << nr;
           //cout << num;
          //  cout << bete_v(u_cifre_j) << " " << bete_o(u_cifre_j) << " " << u_cifre_j << "  " << bete_v(penulima_cif) << " " << bete_o(penulima_cif) << " " << penulima_cif << "  " << bete_v(antepenultima_cif) << " " << bete_o(antepenultima_cif) << " " << antepenultima_cif << "  " << bete_v(prima_cif) << " " << bete_o(prima_cif) << " " << prima_cif << " ora = "<< i <<  endl;
            j++;
        }
        if(suma_o_2 == orizontal && suma_v_2 == vertical)
    {
        ora_max = i;
        ora_min = j;
    }
        i++;
    }


    cout << num << endl;
    if(ora_minima == 0 && minut_minima < 10)
    {
        cout << "0" << ora_minima << ":" << "0" << minut_minima;
    }
    else if(ora_minima == 0 && minut_minima >= 10)
    {
        cout << "0" << ora_minima << ":" << minut_minima;
    }
    else if(ora_minima < 10 && minut_minima < 10)
    {
       cout << "0" << ora_minima << ":" << "0" << minut_minima;
    }
    else if(ora_minima >= 10 && minut_minima >= 10)
    {
        cout << ora_minima << ":" << minut_minima;
    }
    else if(ora_minima >= 10 && minut_minima < 10)
    {
        cout << ora_minima << ":" << "0" << minut_minima;
    }


    if(ora_max >= 10 && ora_min < 10)
    {
        cout << endl << ora_max << ":" << "0" << ora_min;
    }
    else if(ora_max >= 10 && ora_min >= 10)
    {
        cout << endl << ora_max << ":" << ora_min;
    }
    else if(ora_max < 10 && ora_min < 10)
    {
        cout << endl << "0" << ora_max << ":" << "0" << ora_min;
    }
    else if(ora_max < 10 && ora_min >= 10)
    {
        cout << endl << ora_max << ":0" << ora_min;
    }
    return 0;
}
