#include<iostream>
using namespace std;
int a[2001][2001];
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    string c,b;
    cin>>b>>c;
    for(int j=0;j<c.length();j++)a[0][j]=j;
    for(int i=0;i<b.length();i++)a[i][0]=i;
    for(int i=1;i<b.length()+1;i++)
    {
        for(int j=1;j<c.length()+1;j++)
        {
            if(b[i-1]==c[j-1])a[i][j]=a[i-1][j-1];
            else
            {
                if(a[i-1][j]<=a[i][j-1])
                {
                    if(a[i-1][j]<=a[i-1][j-1])a[i][j]=a[i-1][j];
                    else a[i][j]=a[i-1][j-1];
                }
                else{
                    if(a[i][j-1]<=a[i-1][j-1])a[i][j]=a[i][j-1];
                    else a[i][j]=a[i-1][j-1];
                }
                a[i][j]++;
            }
        }
    }
    cout<<a[b.length()][c.length()]<<endl;
    }
    return 0;
}

