#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double n,k,m,s=0,j,z=0;
        cin>>n>>k>>m;
        if(n>m)cout<<"0"<<endl;
        else{
            s=n;
        for(j=0;1;j++){
            s*=k;
            if(s>m)break;
        }
        cout<<j<<endl;
        }
    }
    return 0;
}
