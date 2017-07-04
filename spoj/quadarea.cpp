#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    double a,b,c,d,s,q;
    cin>>a>>b>>c>>d;
    s=(a+b+c+d)/2;
    cout<<sqrt((s-a)*(s-b)*(s-c)*(s-d))<<endl;
    }
}
