#include<iostream>
using namespace std;
int main()
{
    int t,n,m,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m>>s;
        int a[n],k=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%s)k+=a[i]/s;
            else k+=(a[i]/s-1);
        }
        if(k>=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
