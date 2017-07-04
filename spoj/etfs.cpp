#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    long long int m,s,n,r;
    cin>>m>>n;
    /*int a[n+1];
    for(int i=0;i<n+1;i++)a[i]=0;
    for(int i=2;i<=n;i++)
    {
            for(int j=i;j<=n;j+=i)
                a[j]++;
    }
    for(int i=m;i<=n;i++)
        cout<<i-a[i]<<endl;*/
        for(long long int k=m;k<=n;k++)
        {
            r=k;
            s=k;
        for(long long int i=2;i*i<=s;i++)
        {
            if(s%i==0){
            while(s%i==0)s/=i;
            r-=r/i;
            }
        }
        if(s>1)r-=r/s;
        cout<<r<<endl;
        }
    return 0;
}

