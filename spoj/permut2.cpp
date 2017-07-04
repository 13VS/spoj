#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n)
    {
        long long a[n],b[n],p=0;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<n;i++)
        {
            if(a[i]!=i+1)b[i]=a[a[i]-1];
            else b[i]=i+1;
        }
        for(long long i=0;i<n;i++)if(b[i]!=i+1)p=1;
        if(p==1)cout<<"not ambiguous"<<endl;
        else cout<<"ambiguous"<<endl;
        cin>>n;
    }
    return 0;
}
