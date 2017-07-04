#include <iostream>

using namespace std;

int main()
{
    int t,p,m;
    bool a[10000];
    int b[100];
    for(int i=0;i<10000;i++)
    {
        a[i]=false;
    }
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>b[i]>>m;
        for(int j=0;j<m;j++)
        {
            cin>>p;
            a[p]=true;
        }
    }
    p=0;
    for(int i=0;i<t;i++)
    {
        a[b[i]]=false;
    }
    for(int i=0;i<10000;i++)
        if(a[i])p++;
        cout<<p;
    return 0;
}

