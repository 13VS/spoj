#define ll long long
#include<iostream>
using namespace std;
ll comb(ll n,ll k)
{
    ll s=1,t;
    n++;
    t=n;
    for(ll i=1;n<t+k-1;n++)
    {
        s*=n;
        while(s%i==0&&i<k){s/=i;i++;}
    }
    return s;
}
int main()
{
    ll t,n,k;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>n>>k;
        cout<<comb(n-k,k)<<endl;

    }
    return 0;
}
