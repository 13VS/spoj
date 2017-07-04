#define ll long long
#include<iostream>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll s,n;
        cin>>s>>n;
        int a[n],m,k=0,p;
        for(int j=0;j<n;j++)cin>>a[j];
        while(s>0&&k<n)
        {
            m=0;
            for(int j=0;j<n;j++)
            {
                if(m<a[j]){m=a[j];p=j;}
            }
            a[p]=0;
            s-=m;
            k++;
        }
        cout<<"Scenario #"<<i+1<<":"<<endl;
        if(s>0)
        {
            cout<<"impossible"<<endl<<endl;
        }
        else
        cout<<k<<endl<<endl;
    }
    return 0;
}

