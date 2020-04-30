#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("robot3.in");
ofstream fout("robot3.out");
int main()
{
    int t = 0; fin >> t;
    if(t == 1)
    {
        char caracter = 0;
        int poz = 0;
        int numar = 0;
        int num_cif = 0;
        while(true)
        {
       //     cout << "#############################################" << endl;
            fin >> caracter;
            if(fin.eof()) break;
            //cout << caracter << endl;
            if(caracter == 'D')
            {
                fin >> caracter;
             //   cout << "D caracter = " << caracter << endl;
                int cifra_corecta = caracter-'0';
                poz = poz+cifra_corecta;
                if(poz < 0)
                {
                    poz = 10+poz;
                }
                else if(poz > 9)
                {
                    poz = poz-10;
                }
              //  cout << "D poz = " << poz << endl;
            }
            else if(caracter == 'S')
            {
                fin >> caracter;
            //    cout << "S caracter = " << caracter << endl;
                int cifra_corecta = caracter-'0';
                poz = poz-cifra_corecta;
                if(poz < 0)
                {
                    poz = 10+poz;
                }
                else if(poz > 9)
                {
                    poz = poz-10;
                }
                //cout << "S poz = " << poz << endl;
            }
            else if(caracter == 'A')
            {
                num_cif++;
            }
        }
        fout << num_cif;
    }
    if(t == 2)
    {
        char caracter = 0;
        int poz = 0;
        int numar = 0;
        while(true)
        {
            fin >> caracter;
            if(fin.eof()) break;
            //cout << caracter << endl;
            if(caracter == 'D')
            {
                fin >> caracter;
                //cout << caracter << endl;
                int cifra_corecta = caracter-'0';
                poz = poz+cifra_corecta;
                if(poz < 0)
                {
                    poz = 10+poz;
                }
                else if(poz > 9)
                {
                    if(poz > 10)
                    {
                        poz = poz-10;
                    }
                    else
                    {
                        poz = 10-poz;
                    }
                   // cout << "D poz = " << poz << endl;
                }
            }
            if(caracter == 'S')
            {
                fin >> caracter;
                //cout << caracter << endl;
                int cifra_corecta = caracter-'0';
                poz = poz-cifra_corecta;
                if(poz < 0)
                {
                    poz = 10+poz;
                }
                else if(poz > 9)
                {

                    if(poz > 9)
                    {
                        if(poz > 10)
                        {
                            poz = poz-10;
                        }
                        else
                        {
                            poz = 10-poz;
                        }
                  //      cout << "D poz = " << poz << endl;
                    }
                }
                //cout << "S poz = " << poz << endl;
            }
            //fin >> caracter;
            if(caracter == 'A')
            {
                fout << poz;
            }
        }
        //cout << numar;

    }
    if(t == 3)
    {
        int caracter = 0;
        int puterea_10 = 1;
        int poz = 0;
        fin >> caracter;
        int caracter2 = caracter;
        int c = 0;
        int num = 0;
        while(caracter)
        {
            num++;
            //cout << "c = " << c;
            caracter = caracter/10;

        }
        int i = 1;
        while(i <= num-1)
        {
            puterea_10 = puterea_10*10;
            i++;
        }
    //    cout << puterea_10;
        while(num)
        {
            c = (caracter2/puterea_10)%10;
            //cout << "cifre = " << c << endl;
            puterea_10 = puterea_10/10;
            num--;
            if(poz < c && (c-poz) <= 5)
            {
                fout << "D" << (c-poz) << "A";
                poz = c;
              //  cout << "c = " << c << " poz = " << poz << endl;
            }
          //  cout << poz << " if 1" << endl;
            else if(poz < c && (c-poz) > 5)
            {
                fout << "S" << (poz+10-c) << "A";
                poz = c;
            }
          //  cout << poz << " if 2" << endl;
            else if(poz > c && (poz-c) <= 5)
            {
                fout << "S" << (poz-c) << "A";
                poz = c;
            }
           // cout << poz << " if 3" << endl;
            else if(poz > c && (poz-c) > 5)
            {
                fout << "D" << (c+10-poz) << "A";
                poz = c;
            }
            else if(poz == c)
            {
                fout << "A";
            }
          //  cout << poz << " if 4" << endl;
        }
        fout << "T";
    }
    return 0;
}
