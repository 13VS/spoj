#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    while(s!="0")
    {
        int a[5001]={1,1},j=1;
        for(int i=2;i<=s.length();i++)
        {
            if((s[i-2]=='1'&&s[i-1]!='0')||(s[i-2]=='2'&&s[i-1]<='6'&&s[i-1]!='0'))
            {
                j++;
                a[j]=a[j-1]+a[j-2];
            }
            else if(s[i-1]=='0')
            {
                if(s[i-2]>'2'||s[i-2]=='0'){a[j]=0;break;}
                else j--;
            }
            else
            {
                j++;
                a[j]=a[j-1];
            }
        }
        cout<<a[j]<<endl;
        cin>>s;
    }
    return 0;
}
