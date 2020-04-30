#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("tren.in");
ofstream fout("tren.out");
int main()
{
    int t,l,h,m,s;
    fin >> t;
    int max = 0;
    int l1os = 0;
    int l2os = 0;
    int l1op = 0;
    int l2op = 0;
    int l1ms = 0;
    int l2ms = 0;
    int l1mp = 0;
    int l2mp = 0;
    int i = 1;
    int num_1 = 0;
    int num_2 = 0;
    int max_interval = 0;
    int num_invizibile = 0;
    //2
    int ora_preccedenta = 0;
    int minut_preceden = 0;
    int am_gassit = 0;
    //2
    while(i <= t)
    {
        fin >> l >> h >> m >> s;
        if(l == 1)
        {
            l1os = h;
            l1ms = m;
            l1op = h + (m+s)/60;
            l1mp = (m+s)%60;
        }
        else if(l == 2)
        {
            l2os = h;
            l2ms = m;
            l2op = h + (m+s)/60;
            l2mp = (m+s)%60;
        }



        if(l == 1) num_1 = num_1+1;
        else if(l == 2) num_2 = num_2+1;
        if(max < m) max = m;
        //////////////////////////////////////////////////2;



        if (l==2&&l1os!=0){
                cout << l << " " << h << " " << m << " " << s << endl;
                if (l2os>l1os || (l1os==l2os && l2ms>l1ms)){
                    //trenul de pe lina 2 a venit dupa trenul de pe linia 1
                    if (l1op>l2op||(l1op==l2op&&l1mp>l2mp)){
                        //trenul de pe linia 1 a plecat dupa trenul de pe linia 2
                        num_invizibile++;
                        cout << " .. invizibil" << endl;

                    }
                }
        }


        //pct 3
        if (l==1 && l2op!=0){
                if (l1os>l2op || (l1os==l2op && l1ms>l2mp)){
                    int diff = (l1os - l2op)*60 + (l1ms-l2mp);
                    if (diff>max_interval){
                        max_interval=diff;
                    }
                }
        }

        if (l==2 && l1op!=0){
                if (l2os>l1op || (l2os==l1op && l2ms>l1mp)){
                    int diff = (l2os - l1op)*60 + (l2ms-l1mp);
                    if (diff>max_interval){
                        max_interval=diff;
                    }
                }
        }


        i = i+1;
    }

    cout << max;

    if(num_1 > num_2) fout << num_1;
    else if(num_1 < num_2) fout << num_2;



    fout << " " << num_invizibile << " " << max_interval;

    //////////////////////////////////////////////3
    return 0;
}

