#define ll long long
#include<iostream>
using namespace std;
int main()
{
    ll t;
    while(cin>>t)
    {
        string s,s1;
        cin>>s>>s1;
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
            for(ll j=0;j<p;j++)cout<<b[j]<<endl;
            cout<<endl;
        }
        else
        {
            cout<<endl<<endl;
        }
        }
    return 0;
}

