#define ll long long
#include<iostream>
using namespace std;
int main()
{
    ll t,a,b;
    char c;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>a>>c;
        while(1){
        if(c=='=')break;
        else
        {
            cin>>b;
            if(c=='+')a+=b;
        else if(c=='-')a-=b;
        else if(c=='*')a*=b;
        else if(c=='/')a/=b;
        }
        cin>>c;
        }
        cout<<a<<endl;
    }
    return 0;
}
