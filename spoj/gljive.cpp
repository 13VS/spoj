#include<iostream>
using namespace std;
int main()
{
    int a[10],s=0,j=0;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];

    }while(s+a[j]<100){s+=a[j];j++;}
    if(j!=10&&100-s>=s+a[j]-100)s+=a[j];
    cout<<s;
    return 0;
}
