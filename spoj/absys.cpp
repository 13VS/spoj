#include<iostream>
using namespace std;
int con(string a)
{
    int b=0,d=a.length();
    for(int i=0;i<d;i++)
    {
        b*=10;
        b+=a[i]-48;
    }
    return b;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l,m,n,p=0;
        string a,b,c,d;
        getline(cin,d);
        cin>>a>>d>>b>>d>>c;
        for(int i=0;i<a.length();i++)if(a[i]==109)p=1;
        for(int i=0;i<b.length();i++)if(b[i]==109)p=2;
        for(int i=0;i<c.length();i++)if(c[i]==109)p=3;
        if(p==1)
        {
            m=con(b);
            n=con(c);
            cout<<n-m<<" + "<<b<<" = "<<c<<endl;
        }else if(p==2)
        {
            m=con(a);
            n=con(c);
            cout<<a<<" + "<<n-m<<" = "<<c<<endl;
        }
        else if(p==3)
        {
            m=con(a);
            n=con(b);
            cout<<a<<" + "<<b<<" = "<<n+m<<endl;
        }
    }
    return 0;
}
