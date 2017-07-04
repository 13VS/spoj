#define ll unsigned long long
#define m 10000007
#include <iostream>

using namespace std;
ll pow(ll x,ll y)
{
    ll t=1;
    x%=m;
    while(y)
    {
        if(y&1)t=(t*x)%m;
        x=(x*x)%m;
        y=y>>1;
    }
    return t;
}
ll sum(ll n,ll k)
{
    return (pow(n,n)+pow(n,k))%m;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    while(!(n==0&&k==0))
    {
        cout<<(sum(n,k)+(2*sum(n-1,k))%m)%m<<endl;
        cin>>n>>k;
    }
    return 0;
}

