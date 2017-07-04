#include<iostream>
using namespace std;
int main()
{
    string t;
    while(cin>>t)
    {
        if(t=="0")cout<<"0"<<endl;
        else if(t=="1")cout<<"1"<<endl;
        else {
            if(t[t.length()-1]==48)
            {
            int k=t.length()-1;
            while(t[k]==48)
            {
                t[k]+=9;
                k--;
            }
            t[k]--;
            }
            else
            {
                t[t.length()-1]--;
            }
            int p=0;
        for(int i=t.length()-1;i>=0;i--)
        {
            if(t[i]>52)
            {
                t[i]=(t[i]-48)*2+38;
                if(p)t[i]++;
                if(i==0)cout<<"1";
                else p=1;
            }
            else
            {
                t[i]=(t[i]-48)*2+48;
                if(p)t[i]++;
                p=0;
            }
        }
        for(int i=0;i<t.length();i++)cout<<t[i];
        cout<<endl;
        }
    }
    return 0;
}
