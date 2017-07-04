#include<iostream>
using namespace std;
void sub(string &a,string &b,string &c)
{
    string d=a;
    for(int i=d.length()-1,j=b.length()-1;j!=-1;i--,j--)
    {
        if(d[i]>=b[j])c[i]=d[i]-b[j]+48;
        else
        {
            int k=i-1;
            while(d[k]==48)
            {
                c[k]+=9;
                d[k]+=9;
                k--;
            }
            c[k]--;
            d[k]--;
            c[i]=d[i]-b[j]+58;
        }
    }
}
void div(string &a)
{
    int i=0;
    while(i<a.length()){
    if(a[i]%2)
    {
        a[i+1]+=10;
        a[i]=(a[i]-48)/2+48;
    }
    else a[i]=(a[i]-48)/2+48;
    i++;
}
}
void print(string c)
{
    int i=0;
    while(c[i]==48)
    {
        i++;
        if(i==c.length()){cout<<"0";break;}

    }
    for(;i<c.length();i++)cout<<c[i];
    cout<<endl;
}
int main()
{
    for(int i=0;i<10;i++){
    string a,b,c;
    cin>>a>>b;
    c=a;
    sub(a,b,c);
    div(c);
    b=a;
    sub(a,c,b);
    print(b);
    print(c);
    }
    return 0;
}
