#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("eticheta.in");
ofstream fout("eticheta.out");
int main()
{
    int a,b;
    int prima_cif_a = 0;
    int prima_cif_b = 0;
    int restul_lui_a = 0;
    int restul_lui_b = 0;
    int restul_lui_a_inv = 0;
    int restul_lui_b_inv = 0;
    int cif_rest_a = 0;
    int cif_rest_b = 0;
    int cif_a = 0;
    int cif_a2 = 0;
    int cif_b2 = 0;
    int cif_b = 0;
    fin >> a >> b;
    int a1 = a,b1 = b;
    int a2 = a,b2 = b;
    int cif_a3 = 0;
    int cif_b3 = 0;


    //prima cifra a lui a
    while(a1 > 10) a1 = a1 / 10;
    prima_cif_a = a1;
    cout << "prima cifra a lui a=" << prima_cif_a << endl;



    //restul lui a
    while(a2 > 0)
    {
        cif_a = a2%10;
        a2 = a2/10;
        restul_lui_a = restul_lui_a * 10 + cif_a;
    }
    cout << "a inversat e: " << restul_lui_a << endl;

    restul_lui_a = restul_lui_a/10;
    cout << "restul_lui_a inversat = " << restul_lui_a << endl;
    while(restul_lui_a > 0)
    {
        cif_a3 = restul_lui_a%10;
        restul_lui_a = restul_lui_a/10;
        restul_lui_a_inv = restul_lui_a_inv*10+cif_a3;
    }
    cout << "restul lui a final=  " << restul_lui_a_inv << endl;


    while(b1 > 10) b1 = b1/10;
    prima_cif_b = b1;
    cout << "prima cifra a lui b=" << prima_cif_b << endl;

    while(b2 > 0)
    {
        cif_b2 = b2%10;
        b2 = b2/10;
        restul_lui_b = restul_lui_b*10+cif_b2;
    }
    cout << "b inversat e: " << restul_lui_b << endl;

    restul_lui_b = restul_lui_b/10;
    cout << "restul_lui_b inversat = " << restul_lui_b << endl;

    while(restul_lui_b > 0)
    {
        cif_b3 = restul_lui_b%10;
        restul_lui_b = restul_lui_b/10;
        restul_lui_b_inv = restul_lui_b_inv*10+cif_b3;
    }

    cout << "restul lui b final=  " << restul_lui_b_inv << endl;

    cout<< "Prima cifra a lui a = " <<prima_cif_a << endl;
    cout << "Prima cif a lui b = " << prima_cif_b << endl;
    cout << "Restu lui a = " << restul_lui_a_inv << endl;
    cout << "Restul lui b = " << restul_lui_b_inv << endl;


    //cerinta 1 (scriem nr lizuca si petrica)

    if(prima_cif_a == 1 && prima_cif_b == 2)
    {
        fout << b << " " << a << endl;
        fout << restul_lui_b_inv << " " << restul_lui_a_inv << endl;

    }else if(prima_cif_b == 1 && prima_cif_a == 2)
    {
        fout << a << " " << b << endl;
        fout << restul_lui_a_inv << " " << restul_lui_b_inv << endl;
    }

    if(restul_lui_a_inv>restul_lui_b_inv && prima_cif_a==1){
        fout << "Petrica"<<endl;
    }else if (restul_lui_a_inv>restul_lui_b_inv && prima_cif_a==2){
        fout << "Lizuca"<<endl;
    }else if (restul_lui_b_inv>restul_lui_a_inv && prima_cif_b==1){
        fout << "Petrica"<<endl;
    }else if (restul_lui_b_inv>restul_lui_a_inv && prima_cif_b==2){
        fout << "Lizuca"<<endl;
    }


    return 0;
}
