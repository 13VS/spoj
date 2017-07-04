#define ll  long long
#define mod 1000000007
#include <iostream>
using namespace std;
void mul1(ll a[][2],ll b[][2],ll c[][2])
{
    c[0][0]=((a[0][0]*b[0][0])%mod+(a[0][1]*b[1][0])%mod)%mod;
    c[0][1]=((a[0][0]*b[0][1])%mod+(a[0][1]*b[1][1])%mod)%mod;
    c[1][0]=((a[1][0]*b[0][0])%mod+(a[1][1]*b[1][0])%mod)%mod;
    c[1][1]=((a[1][0]*b[0][1])%mod+(a[1][1]*b[1][1])%mod)%mod;
}
void  mul(ll z[][2],ll &n,ll a[][2])
{
    ll t[2][2];
    while(n>1){
    if(n%2==1)
    {
        n--;
        mul(z,n,a);
        mul1(a,z,t);
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)a[i][j]=t[i][j];
    }
    else
    {
        n/=2;
        mul(z,n,a);
        mul1(a,a,t);
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)a[i][j]=t[i][j];
    }
    }
}
int main()
{
    ll m,n,t,z[][2]={{1,1},{1,0}},a[2][2];
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    for(int k=0;k<2;k++)
            for(int j=0;j<2;j++)a[k][j]=z[k][j];
    cin>>m>>n;
    if(m<=1)m=0;
    else
    {
        mul(z,m,a);
        m=a[0][0]-1;
    }
    for(int k=0;k<2;k++)
            for(int j=0;j<2;j++)a[k][j]=z[k][j];
    n++;
    mul(z,n,a);
    n=a[0][0]-1;
    cout<<n-m<<endl;
    }
    return 0;
}

