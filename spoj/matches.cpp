#include<iostream>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n==1)cout<<"1"<<endl;
        else{
            cout<<"0.";
            s="1";
            while(n>4)
            {
                s="0"+s;
                int p=1,a;
                for(int j=s.length()-1;j>=0;j--)
                {
                    a=(s[j]-48)*5;
                    s[j]=48+a%10+p;
                    p=a/10;
                }
                s[0]+=p;
                n--;
            }
            if(n>=4)cout<<s;
            if(n==2)cout<<"5"<<endl;
            else cout<<"25"<<endl;
        }
    }
    return 0;
}
