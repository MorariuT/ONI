#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int main()
{
    int t = 0; fin >> t;
    if(t == 1)
    {
        int n = 0; fin >> n;
        int n3 = n-3;
        int i = 0;
        int produs_p = 1;
        int produs_i = 1;
       // int g = 4;
        //cout << "n-3 = " << n3 << endl;
        while(i < n3)
        {
			//cout << "i = " << i << endl;
			produs_p = produs_p*5;
			i++;
        }
        produs_p = produs_p*9;
		fout << produs_p;

	}




    if(t == 2)
    {
		int n = 0; fin >> n;
		int n_temp = n;
		int primele_3_cif = 0;
		int num_cif = 0;
		int n_t = n;
		while(n_t)
		{
            num_cif++;
            n_t = n_t/10;
		}
		int num_cif3 = num_cif-3;
		int putere_10  = 1;
		while(num_cif3)
		{
            putere_10 = putere_10*10;
            num_cif3--;

		}
		//cout << putere_10 << endl;
		primele_3_cif = n_temp/putere_10;
		//cout << "num_cif = " << num_cif << endl;
        //cout << "primele_3_cif = " << primele_3_cif << endl;
		int l[9] = {163,165,167,252,363,365,367,492,812};
		int i = 0;
		int precedent = 0;
		while(i < 9)
		{
			if(l[i] > primele_3_cif) break;
			precedent = l[i];
			i++;
		}
		i = 0;
		int termen2 = 0;
		while(i < 9)
		{
			if(l[i] > primele_3_cif)
			{
				//cout << "termenul mai mare = " << l[i] << endl;
				termen2 = l[i];
				break;
			}
			i++;
		}
		int k = 1;
		int lp = num_cif-3;
		while(k <= lp)
		{
			if(k % 2 == 0) precedent = precedent*10+8;
			else if(k % 2 == 1) precedent = precedent*10+9;
			k++; 
		}
		k = 1;
		while(k <= lp)
		{
			if(k % 2 == 0) termen2 = termen2*10+1;
			else if(k % 2 == 1) termen2 = termen2*10+0;
			k++; 
		}
		//cout << "mezinu = " << precedent << " si fratele cel mare = " << termen2 << endl;
		int o = termen2-n;
		int num_cif2 = 0;
		int f = n-precedent;
		if(o < f) fout << termen2;
		else if(o > f)  fout << precedent;
		else if(o == f) fout << precedent; 
		

	}
    //cout << "Hello world!" << endl;
    return 0;
}
