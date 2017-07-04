#include<iostream>
using namespace std;
int majority(int a[],int n)
{
    int m=0,c=1;
    for(long long i=0;i<n;i++)
    {
        if(a[m]==a[i])c++;
        else c--;
        if(c==0){m=i;c=1;}
    }
    return m;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        int a[n],m,c=0;
        for(long long j=0;j<n;j++)
        {
            cin>>a[j];
        }
        m=majority(a,n);
        for(long long j=0;j<n;j++)if(a[j]==a[m])c++;
        if(c>n/2)cout<<"YES "<<a[m]<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
