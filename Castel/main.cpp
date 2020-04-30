#include <iostream>
#include <fstream>
#include <list>
using namespace std;
ifstream fin("castel.in");
ofstream fout("castel.out");
int main()
{
    int n_coduri = 0;
    int n_chei = 0;
    fin >> n_coduri;
    int coduri = 0;
    int i = 0;
    int l[10];
    while(i < 11)
    {
        l[i] = 0;
        i++;
    }
    i = 0;
    while(i < n_coduri)
    {
   //     cout << "###############################################" << endl;
        fin >> coduri;
        //cout << "coduri = " << coduri << " ";
        int cifre = 0;
        while(coduri)
        {
   //         cout  << "          ######################" << endl;
            cifre = coduri%10;
     //       cout << "               cifre = " << cifre << " coduri = " << coduri << endl ;
       //     cout << "coduri inainte impartire = " <<coduri<<endl;
            coduri = coduri/10;
         //   cout << "coduri dupa impartire = " <<coduri<<endl;

            if(cifre == 0)
            {
                l[0]++;
     //           cout << "###################################################0 " << l[0] << endl;
            }
            if(cifre == 1)
            {
                l[1]++;
   //             cout << "###################################################1 " << l[1] << endl;
            }
            if(cifre == 2)
            {
                l[2]++;
 //               cout << "###################################################2 " << l[2] << endl;
            }
            if(cifre == 3)
            {
                l[3]++;
        //        cout << "###################################################3 " << l[3] << endl;
            }
            if(cifre == 4)
            {
                l[4]++;
      //          cout << "###################################################4 " << l[4] << endl;
            }
            if(cifre == 5)
            {
                l[5]++;
    //            cout << "###################################################5 " << l[5] << endl;
            }
            if(cifre == 6)
            {
                l[6]++;
  //              cout << "###################################################6 " << l[6] << endl;
            }
            if(cifre == 7)
            {
                l[7]++;
      //          cout << "###################################################7 " << l[7] << endl;
            }
            if(cifre == 8)
            {
                l[8]++;
      //          cout << "###################################################8 " << l[8] << endl;
            }
            if(cifre == 9)
            {
                l[9]++;
    //            cout << "###################################################9 " << l[9] << endl;
            }
          //  cout << "coduri dupa while = " <<coduri<<endl;

        }
     //   cout << endl;
        i++;
    }
    i = 1;
    int chei = 0;
    fin >> n_chei;
    int max = 0;
    int index = 0;
    while(i <= n_chei)
    {
        fin >> chei;
        i++;
    }
    i = 0;
    while(i < 11)
    {
     //   cout << l[i] << endl;
        if(max < l[i])
        {
            max = l[i];
            index = i;
        }
        i++;
    }
    fout << index << " " << max;
    return 0;
}
