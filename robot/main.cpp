#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
ifstream fin("robot.in");
ofstream fout("robot.out");
int main()
{
    int cer = 0; fin >> cer;

        long long int n = 0; fin >> n;
        long long int i = 1;
        long long int nr_h = 0;
        long long int nr_m = 0;
        long long int nr_s = 0;
        long long int h = 0,m = 0,s = 0; fin >> h >> m >> s;
        long long int nr_secunde_total = 0;
        long long int s1 = 0,s2 = 0,s3 = 0; fin >> s1 >> s2 >> s3;
        s = s+s1*(n-1);
        s = s+s2*n;
        nr_secunde_total = pow(60,2)*h + m*60 + s;
        long long int nr_citit = 0;
        while(i <= n)
        {
            fin >> nr_citit;
            long long int nr_citit_2 = nr_citit;
            long long int nr_citit_3 = nr_citit;
            int are_cifre_pare =  0;
            int are_cifre_impare = 0;
            int sunt_intercalate = 0;
            int num_cif = 0;
            int sunt_pare_descrescatoare = 1;
            int sunt_impare_crescatoare = 1;
            int am_trecut_la_pare = 0;
            long long int precedent = 0;
            int num = 0;
            long long int put_10 = 1;
            while(nr_citit)
            {
                num++;
                num_cif++;
                nr_citit /= 10;
            }
            nr_citit = nr_citit_2;
            num--;
            put_10 = put_10/10;
            precedent = (int)(nr_citit/pow(10,num))%10;

            if(precedent % 2 == 1) are_cifre_impare = 1;
            else {
                are_cifre_pare = 1;
                sunt_intercalate = 1;
            }
            num--;
            int c = 0;
            while(num >= 0)
            {

                c =(int)(nr_citit/pow(10,num))%10;
                if(am_trecut_la_pare == 0)
                {
                    if(c % 2 == 0)
                    {
                        am_trecut_la_pare = 1;
                        are_cifre_pare = 1;

                    }
                    else
                    {
                        are_cifre_impare = 1;
                        if(precedent > c)
                        {
                            sunt_impare_crescatoare = 0;
                            break;
                        }

                    }
                }
                else
                {
                    if(c % 2 == 1)
                    {
                        sunt_intercalate = 1;
                        are_cifre_impare = 1;
                        break;
                    }
                    else
                    {
                        are_cifre_pare = 1;
                        if(precedent < c)
                        {
                            sunt_pare_descrescatoare = 0;
                            break;
                        }
                    }
                }
                precedent = c;
                num--;



            }

            int de_reparat = 1;

            if(sunt_impare_crescatoare == 0) nr_secunde_total += s3;
            else if(sunt_pare_descrescatoare == 0) nr_secunde_total += s3;
            else if(are_cifre_impare == 0) nr_secunde_total += s3;
            else if(are_cifre_pare == 0) nr_secunde_total += s3;
            else if(sunt_intercalate == 1) nr_secunde_total += s3;
            else{
                //e bun
                cout <<  nr_citit_3<<endl;
                de_reparat = 0;
            }

            if (de_reparat==0 && cer==2){
                fout << nr_citit_3 << endl;
            }


            if (de_reparat==1){
                // nr_citit3

                long long int nr_reparat = 0;

                cout<< "de reparat nr=" << nr_citit_3 << " care are " << num_cif << " cifre " <<endl;
                short cif[num_cif];
                int i=num_cif-1;
                int poz=0;
                while(i>=0){
                    cif[poz] = (int)(nr_citit_3/pow(10,i))%10;
                    cout << "cif["<<poz<<"]="<<cif[poz]<< " " ;
                    i--;poz++;
                }
                cout<<endl;

                // primele sunt impare
                while(true){
                    int am_gasit_impar = 0;

                    int k = 0;
                    int min_cif = 10;
                    int poz_min_cif = 0;
                    while (k<num_cif){
                        if (cif[k]<10 && cif[k]%2==1){
                            am_gasit_impar = 1;
                            if (cif[k]<min_cif){
                                min_cif = cif[k];
                                poz_min_cif = k;
                            }
                        }
                        k++;
                    }

                    if (am_gasit_impar==0) break;
                    else{
                        nr_reparat = nr_reparat * 10 + min_cif;
                        cif[poz_min_cif] = 10;
                    }
                }

                cout<< "nr din cifre impare=" << nr_reparat << endl;

                 // apoi pt pare
                while(true){
                    int am_gasit_par = 0;

                    int k = 0;
                    int max_cif = -1;
                    int poz_max_cif = 0;
                    while (k<num_cif){
                        if (cif[k]<10 && cif[k]%2==0){
                            am_gasit_par = 1;
                            if (cif[k]>max_cif){
                                max_cif = cif[k];
                                poz_max_cif = k;
                            }
                        }
                        k++;
                    }

                    if (am_gasit_par==0) break;
                    else{
                        nr_reparat = nr_reparat * 10 + max_cif;
                        cif[poz_max_cif] = 10;
                    }
                }

                cout<< "nr din cifre toate=" << nr_reparat << endl;


                if (are_cifre_pare==0 && nr_reparat%2!=0){
                    nr_reparat = nr_reparat%((int)pow(10,num_cif-1))*10;
                }

                if (are_cifre_impare==0){

                    nr_reparat = 9*(int)pow(10,num_cif-1)+nr_reparat%((int)pow(10,num_cif-1));
                }

                if(cer==2){
                    fout << nr_reparat << endl;
                }











            }





            //////////////////


            i++;

        }
        nr_h = nr_secunde_total/3600;
        nr_m = (nr_secunde_total%3600)/60;
        nr_s = (nr_secunde_total%3600)%60;

        if (cer==1){
            fout << nr_h << " " << nr_m << " " << nr_s << endl;
        }




    return 0;
}
