#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
ifstream fin("norocos.in");
ofstream fout("norocos.out");
int main()
{
	int cer = 0; fin >> cer;
	if(cer == 1)
	{
		int k = 0;
		int n = 0; fin >> n >> k;
		int i = 1;
		long long int min = INT_MAX;
		long long int max = 0;
		long long int nr_citit = 0;
		while(i <= n)
		{
			fin >> nr_citit;
			if((nr_citit*nr_citit+1)%2 == 0)
			{
				if(nr_citit < min) min = nr_citit;
				if(nr_citit > max) max = nr_citit;
			}
			i++;
		}
		fout << min << " " << max;
	}

	if(cer == 2)
	{

	}
	return 0;
}
