#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string c;
    int t,a,s;
    long long int b,j;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>c>>b;
        a=c[c.length()-1]-48;
        if(!b)cout<<"1"<<endl;
        else{
        if(a==0||a==5||a==6||a==1)cout<<a<<endl;
        else {
        	s=b%4;
        	if(s==0)s=4;
        	cout<<(int)pow(a,s)%10<<endl;
        }}}
    return 0;
}
