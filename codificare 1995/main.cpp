#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("codificare.in");
ofstream fout("codificare.out");
int main()
{
    char litera = 0;
    char precedent = 0;
    char precedent1 = 0;
    fin >> precedent;
    fout << precedent;
    while(true)
    {
        fin >> litera;



        //else cout << litera;
        if(precedent == 'B' || precedent == 'C' || precedent == 'D' || precedent == 'F' || precedent == 'G' || precedent == 'H'|| precedent == 'J' || precedent == 'K' || precedent == 'L'
        || precedent == 'M' || precedent == 'N' || precedent == 'P' || precedent == 'Q' || precedent == 'R' || precedent == 'S' || precedent == 'T' || precedent == 'V'
        || precedent == 'W' || precedent == 'X' || precedent == 'Y' || precedent == 'Z')
        {
            if(litera == 'A' || litera == 'E' || litera == 'I' || litera == 'O' || litera == 'U')
            {
                fout << "S";
            }
            else if(litera == 'B' || litera == 'C' || litera == 'D' || litera == 'F' || litera == 'G' || litera == 'H'|| litera == 'J' || litera == 'K' || litera == 'L'
            || litera == 'M' || litera == 'N' || litera == 'P' || litera == 'Q' || litera == 'R' || litera == 'S' || litera == 'T' || litera == 'V'
            || litera == 'W' || litera == 'X' || litera == 'Y' || litera == 'Z')
            {
                fout << precedent;
            }
        }
        else if(precedent == 'A' || precedent == 'E' || precedent == 'I' || precedent == 'O' || precedent == 'U')
        {
            if(precedent1 == 'B' || precedent1 == 'C' || precedent1 == 'D' || precedent1 == 'F' || precedent1 == 'G' || precedent1 == 'H'|| precedent1 == 'J' || precedent1 == 'K' || precedent1 == 'L'
            || precedent1 == 'M' || precedent1 == 'N' || precedent1 == 'P' || precedent1 == 'Q' || precedent1 == 'R' || precedent1 == 'S' || precedent1 == 'T' || precedent1 == 'V'
            || precedent1 == 'W' || precedent1 == 'X' || precedent1 == 'Y' || precedent1 == 'Z')
            {
                fout << precedent << "O";
            }
            else if(precedent1 == 'A' || precedent1 == 'E'|| precedent1 == 'I' || precedent1 == 'O' || precedent1 == 'U')
            {
                fout << precedent;
            }
        }

        //cout << "PRECEDENT = " << precedent << " litera = " << litera << " si preceent1 = " << precedent1 << endl;
        precedent1 = precedent;
        precedent = litera;
        if(fin.eof()) break;
        // cout << litera;
    }
    return 0;
}
