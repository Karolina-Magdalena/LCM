#include <iostream>

using namespace std;

int a,b,c,d,e,x;

int main()
{
    cin>>x;
    for (int i=1; i<=x; i++)
    {
    cin>>a>>b;
    c=a;
    d=b;
    while (b!=0)
    {
        e=a%b;
        a=b;
        b=e;
    }
    cout<<(c/a)*d<<endl;
    }
        return 0;
}
