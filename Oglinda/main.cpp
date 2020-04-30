#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("oglinda.in");
ofstream fout("oglinda.out");
int main()
{
	long long int n = 0,m = 0; fin >> n >> m;
	//long long int i,j;
	long long int k = 1;
	long long int c = 0,b = 0,l  = 0,o = 0;
    int* v =  new int[n+1];
	while(k <= n)
	{
		v[k] = k;
		cout << v[k] << " ";
		k++;
	}
	cout << endl;
	k = 0;
	while(k < m)
	{
		fin >> c >> b;
		if(c == 1) fin >> l;
		if(c == 1)
		{
        //    cout << "@@@@@@@@@@@@@@@@@@@@" << endl;
           // int h = i;
		//	cout << c << " " << b << " " << l << endl;
			long long int x = 0;
			cout << "(l-b)/2 = " << (l-b)/2 << endl;
			while(x <= (l-b)/2)
			{
            //    cout << "#################" << endl;
				long long int aux = v[l-x];
				v[l-x] = v[b+x];
				v[b+x] = aux;
				x++;
            }
            int i = 1;
            cout << c << " " << b << " " << l << endl;
            while(i <= n)
            {
                cout << v[i] << " ";
                i++;
            }
            cout << endl;
		}

		else if(c == 2)
		{
			//cout << c << " " << b << endl;
            fout << v[b] << endl;;
		}
		k++;
	}
	k = 0;

    return 0;
}

