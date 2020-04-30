#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("Cifre.in");
ofstream fout("Cifre.out");
int main()
{
    int a,b;
    fin >> a >> b;
    int b_temp = b;
    int b_temp_3 = b;
    int cifre_b_2 = 0;
    int cifre_a_2 = 0;
    int nr_nou_a = 0;
    int nr_nou_b = 0;
    int a_2 = a;
    int b_2 = b;

    int cati_de_zero = 0;


    int cifre_a = 0;
    int cif_curenta_a = 0;
    int am_gasit = 0;
    int cifre_b = 0;
    int cif_curenta_b = 0;
    int num_a = 0;
    int min = 0;
   // cout << "a)" << " ";
    while(a > 0)
    {
        cifre_a = a%10;
        a = a/10;
        b = b_temp;
        while(b > 0)
        {
            cifre_b = b%10;
            b = b/10;
            if(cifre_a == cifre_b)
            {
                fout << cifre_b << " ";
                break;
            }
        }
    }




    int nr_nou = 0;
    a=a_2;
    b=b_2;
    while(a > 0 || b > 0)
    {
        int max = 0;
        cout << a << " " << b << endl;
        int a_temp = a;
        while(a_temp > 0)
        {
            cif_curenta_a  = a_temp%10;
            a_temp = a_temp/10;
            if(max < cif_curenta_a)
            {
                max = cif_curenta_a;
                am_gasit = 1;
            }
        }
        int b_temp=b;
        while(b_temp > 0)
        {
            cif_curenta_b = b_temp%10;
            b_temp = b_temp/10;
            if(max < cif_curenta_b)
            {
                max = cif_curenta_b;
                am_gasit = 2;
            }
        }

        cout << "max = " << max << endl;
        cout << "gasit = " << am_gasit << endl;

        if (am_gasit==1){
            //eliminam cifra max din a
            int a_temp_2 = a;
            int nr_nou_a = 0;
            while(a_temp_2 > 0)
            {
                int cifre_a_2 = a_temp_2%10;
                int am_eliminat = 0;
                a_temp_2 = a_temp_2/10;
                if(cifre_a_2 == max && am_eliminat==0)
                {
                    am_eliminat = 1;
                }
                else
                {
                    nr_nou_a = nr_nou_a * 10 + cifre_a_2;
                    if (nr_nou_a == 0 && cifre_a_2 == 0){
                        cati_de_zero ++;
                    }
                }
            }
            a = nr_nou_a;
        }else{
            //eliminiam cifra max din b
            int b_temp_2 = b;
            int nr_nou_b = 0;
            int am_eliminat = 0;
            cout <<"############" << b_temp_2<<endl;
            while(b_temp_2 > 0)
            {
                int cifre_b_2 = b_temp_2%10;
                b_temp_2 = b_temp_2/10;
                if(cifre_b_2 == max && am_eliminat==0)
                {
                    am_eliminat = 1;
                }
                else
                {
                    nr_nou_b = nr_nou_b * 10 + cifre_b_2;
                    if (nr_nou_b == 0 && cifre_b_2 == 0){
                        cati_de_zero ++;
                    }
                }
            }
            b = nr_nou_b;
        }

        nr_nou = nr_nou*10 + max;

        cout << "nr_nou=" << nr_nou << endl;
    }

    int k=0;
    while(k<cati_de_zero){
        nr_nou = nr_nou * 10;
        k++;
    }

    cout << "nr final===" << nr_nou<< endl;



    return 0;
}
