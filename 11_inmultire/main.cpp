#include <iostream>

using namespace std;

int main()
{
    int a,b,c,p1,p2,p3,s1,s2,s3;
    int maxi = 0;
    cin >> a >> b >> c;
    p1 = a*b;
    p2 = a*c;
    p3 = b*c;
    s1 = p1+c;
    s2 = p2+b;
    s3 = p3+a;
    if(s1 > maxi)
    {
        maxi = s1;
    }
    if(s2 > maxi)
    {
        maxi = s2;
    }
    if(s3 > maxi)
    {
        maxi = s3;
    }
    cout << "Valoarea maxima este " << maxi << endl;
    return 0;
}
