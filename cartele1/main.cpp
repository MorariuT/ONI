#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cartele.in");
ofstream fout("cartele.out");
int main()
{
    int c = 0;
    fin >> c;
    if(c == 1)
    {
        char copil = 0;
        char stadiu = 0;
        int n = 0;
        fin >> n;
        int h = 0,m = 0,s = 0;
        int i = 1;
        int num_b = 0;
        int num_f = 0;
        while(i <= n)
            {
                fin >> copil >> stadiu >> h >> m >> s;
                //cout << "copil = " << copil << " stadiu = " << stadiu << endl;
                if(copil == 'b' && stadiu == 'i')
                {
                    num_b++;
                    //cout << "##################################baiat copil = " << copil << endl;
                }
                else if(copil == 'b' && stadiu == 'e') num_b--;
                else if(copil == 'f' && stadiu == 'i')
                {
                    num_f++;
                    //cout << "############################fete copil = " << copil << endl;
                }
                else if(copil == 'f' && stadiu == 'e') num_f--;
                i++;
            }
            fout << num_b << " " << num_f << endl;
    }


    if(c == 2)
    {
        char copil = 0;
        char stadiu = 0;
        int n = 0;
        fin >> n;
        int h = 0,m = 0,s = 0;
        int i = 1;
        int num_b = 0;
        int suma_s = 0;
        int num_f = 0;
        int s_f_i = 0;
        int s_b_i = 0;
        int s_f_e = 0;
        int s_b_e = 0;
        while(i <= n)
            {
                fin >> copil >> stadiu >> h >> m >> s;
                //cout << "copil = " << copil << " stadiu = " << stadiu << endl;
                if(copil == 'b' && stadiu == 'i')
                {
                    num_b++;
                    s_b_i = s;
                   // cout << "##################################baiat copil = " << copil << endl;
                }
                else if(copil == 'b' && stadiu == 'e')
                {
                    num_b--;
                    s_b_e = s;
                }
                else if(copil == 'f' && stadiu == 'i')
                {
                    num_f++;
                    s_f_i = s;
                    //cout << "############################fete copil = " << copil << endl;
                }
                else if(copil == 'f' && stadiu == 'e')
                {
                    num_f--;
                    s_b_e = s;
                }
                i++;
                }
                cout << "######################fete intrare = " << num_f << endl;
                cout << "######################bairti intrare = " << num_b << endl;
                cout << "$$$$$$$$$$$$$$$$$$$$$$$$dif_f = " << s_f_i - s_f_e << endl;
                cout << "$$$$$$$$$$$$$$$$$$$$$$$$dif_b = " << s_b_i - s_b_e << endl;
                fout << s_b_i - s_b_e;
    }



    if(c == 3)
    {
        char copil = 0;
        char stadiu = 0;
        int n = 0;
        fin >> n;
        int h = 0,m = 0,s = 0;
        int suma_r = 0;
        int max = 0;
        int i = 1;
        int num_b = 0;
        int num_f = 0;
        int s_b = 0;
        while(i <= n)
            {
                fin >> copil >> stadiu >> h >> m >> s;
                //cout << "copil = " << copil << " stadiu = " << stadiu << endl;
                if(copil == 'b' && stadiu == 'i')
                {
                    num_b++;
                    //cout << "##################################baiat copil = " << copil << endl;
                }
                else if(copil == 'b' && stadiu == 'e') num_b--;
                else if(copil == 'f' && stadiu == 'i')
                {
                    num_f++;
                    //cout << "############################fete copil = " << copil << endl;
                }
                else if(copil == 'f' && stadiu == 'e') num_f--;
                if(num_b % 2 == 1)
                {
                    if(s > max)
                    {
                        max = s;
                    }
                }
                i++;
            }
            cout << max-10;
    }
    return 0;
}
