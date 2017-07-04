#define ll long long
#include<iostream>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        string s,s1;
        cin>>s1>>s;
        ll a[s.length()],len=0,j=1,b[s1.length()];
        a[0]=0;
        while(j<s.length())
        {
            if(s[j]==s[len])
            {
                len++;
                a[j]=len;
                j++;
            }
            else
            {
                if(len)
                {
                    len--;
                }
                else
                {
                    a[j]=0;
                    j++;
                }
            }
        }j=0;
        ll p=0;
        for(ll k=0;k<s1.length();)
        {
            if(s1[k]==s[j])
            {
                j++;
                k++;
            }
            if(j==s.length()){j=a[j-1];b[p]=k-s.length();p++;}
            else if(k<s1.length()&&s[j]!=s1[k])
            {
                if(j!=0)
                j=a[j-1];
                else k++;
            }
        }
        if(p)
        {
            cout<<p<<endl;
            for(ll j=0;j<p;j++)cout<<b[j]+1<<" ";
            cout<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }
        }
    return 0;
}
