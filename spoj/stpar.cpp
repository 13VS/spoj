#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        stack<int>s;
        s.push(1000000);
        int a[n],p=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0,j=1;i<n-1;i++)
        {
            while(j==s.top())
            {
                s.pop();
                j++;
            }
            if(a[i]!=j)
            {
                if(a[i]<s.top())s.push(a[i]);
                else {p=0;break;}
            }
            else
            {
                j++;
            }
        }
        if(p)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        cin>>n;
    }
    return 0;
}
