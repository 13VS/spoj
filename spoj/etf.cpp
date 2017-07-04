#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,r;
        cin>>n;
        r=n;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0){
            while(n%i==0)n/=i;
            r-=r/i;
            }
        }
        if(n>1)r-=r/n;
        cout<<r<<endl;
    }
    return 0;
}

