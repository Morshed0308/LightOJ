#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    string a;
    ll num,sum=0;
    int tc;
    cin >>tc;
    for(int i=1;i<=tc;i++)
    {
        sum=0;
        cin >>a>>num;

        if(num<0)num=num*-1;
        int len=a.length();

        for(int j=0;j<len;j++)
        {
            if(a[j]=='-') continue;
            sum+=(a[j]-48);

            if(sum>=num)
            {
                sum=sum%num;
            }
            if(j!=len-1&&sum<num)
            {
                sum=sum*10;
            }
            else if(j==len-1&&sum>=num)
            {
                sum=sum%num;
            }
            //cout <<sum<<endl;


        }
        if(sum==0)printf("Case %d: divisible\n",i);
        else printf("Case %d: not divisible\n",i);
    }

}
