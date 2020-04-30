#include <iostream>

using namespace std;

int main()
{
int b = 0;
int s = 0;
cout << "Cati lei costa pachetul:";
cin >> b;
cout << "Gigel are:";
cin >> s;
cout << "Gigel cmpara:" << s/b << endl;

cout << "Gigel mai are nevoie de:" << b-(s%b);


return 0;
}
