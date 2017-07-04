#include<iostream>
using namespace std;
int main()
{
    long long t,b,e,m,r;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        r=1;
        cin>>b>>e>>m;
        b%=m;
        while(e)
        {
            if(e&1)r=(r*b)%m;
            e=e>>1;
            b=(b*b)%m;
        }
        cout<<i+1<<". "<<r<<endl;
    }
    return 0;
}
