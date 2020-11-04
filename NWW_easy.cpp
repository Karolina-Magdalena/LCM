#include <iostream>

using namespace std;

int a,b,x;
int iloczyn;

int main()
{
    cin>>x;
    for (int i=1; i<=x; i++)
    {
    cin>>a>>b;
    iloczyn=a*b;
    while ((a!=b)&&(a>0)&&(b>0))
    {
        if(a>b)
        {
        a=a-b;
        }
        else
        {
        b=b-a;
        }
    }
    cout<<(iloczyn)/a<<endl;
    }
        return 0;
}
