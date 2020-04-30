#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int main()
{
    int n,m;
    cin  >> n >> m;
    int i = 0;
    int num = 0;
    int apararitii_max= 0;
    int num_comune = 0;

    int c_max = 0;
    while(i <= 9)
    {
        int n1_c = 0;
        int n2_c = 0;
        int num_1 = 0;
        int num_2 = 0;
        int cif_com = 0;
        int cif2_com = 0;
        int n_temp = n;
        int m_temp = m;
        while (n_temp > 0)
        {
            n1_c = n_temp%10;
            n_temp = n_temp/10;
            if (n1_c == i)
            {
                cif_com = n1_c;
                num_1 = num_1+1;
            }
        }
        while (m_temp > 0)
        {
            n2_c = m_temp%10;
            m_temp = m_temp/10;
            if (n2_c == i)
            {
                cif2_com = n2_c;
                num_2 = num_2+1;
            }
        }
        //cout << " cifra " << i << " apare de " << num_1 << " ori in " << n << endl;
        //cout << " cifra " << i << " apare de " << num_2 << " ori in " << m << endl;

        if (num_1>0 && num_2>0){
            num_comune = num_comune*10 + i;
            //cout << "cif COMUNA  = " << i << endl;
            int aparatitii_comune=0;
            if (num_1<num_2){
                aparatitii_comune = num_1;

            }else{
                aparatitii_comune = num_2;
            }
            //maxim
            if (aparatitii_comune>apararitii_max){
                apararitii_max=aparatitii_comune;
                c_max = i;
            }
        }
        i = i+1;
    }
    //cout << num << " ";

    cout << "cifra cu aparitii max e "<< c_max << " a aparut de "<<apararitii_max<<" ori"<<endl;
    cout << "cifre comune" << num_comune << endl;
    return 0;
}
