#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,b;
    string c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    scanf("%d%d",&a,&b);
    cin>>c;
    printf("%d\n",a*a-2*b);
    }
    return 0;
}
