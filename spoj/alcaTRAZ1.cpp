#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int p=0;
    string s;
    cin>>s;
    for(int j=0;j<s.length();j++)p+=(s[j]-48);
    cout<<p<<endl;
    }
    return 0;
}

