#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("robot.in");
ofstream fout("robot.out");
int main()
{
    int c = 0;
    fin >> c;
    if(c == 1)
    {
        int cer = 0;

        char cara = 0;
        int num = 0;

        while(!fin.eof())
        {
            fin.get(cara);

            //cout << cara << endl;

            if(cara >= '0' && cara <= '9')
            {
                int numeric = cara - '0';
                //cout << "numar:" << numeric << endl;
                num = num+1;
            }


            if(cara == 'D')
            {
                //cout << "Dreapta" << endl;
            }
            if(cara == 'A')
            {
                //cout << "A" << endl;
            }
            if(cara == 'S')
            {
                //cout << "Stanga" << endl;
            }
            if(cara == 'T')
            {
                //cout << "Terminat" << endl;
            }
        }
        fout << num << endl;
    }




    else if(c == 2)
    {
        int cer = 0;

        char cara = 0;
        int num = 0;

        while(!fin.eof())
        {
            fin.get(cara);
            if(cara >= '0' && cara <= '9')
            {
                fout << cara << " ";
            }
        }
    }
    return 0;
}


