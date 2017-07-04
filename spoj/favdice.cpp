#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       double n,s=0,r;
       cin>>n;
       r=n;
       while(n)
       {
           s+=1/n;
           n--;
       }
       s*=r;

       printf("%.2lf\n",s);
    }
    return 0;
}
