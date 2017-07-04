#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,k,c=0;
    cin>>n>>k;
    int b[k];
    bool a[n+1];
    memset(a,true,n+1);
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
        if(a[b[i]]==true)
        {
            for(int j=b[i];j<=n;j+=b[i]){
                if(a[j]==true){a[j]=false;
                c++;}
            }
        }
    }
    cout<<n-c;
    return 0;
}

