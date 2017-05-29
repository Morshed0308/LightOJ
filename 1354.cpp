#include <bits/stdc++.h>

using namespace std;

int main()
{

   // freopen("1354.txt","w",stdout);

    int tc;
    scanf("%d",&tc);
    string a,b;
    for(int i=1;i<=tc;i++)
    {
        cin >>a>>b;
        int len=a.size();
        int temp=0;
        int j=0,ind=0;
        int ara[4]={0};
        for(j=0;j<len;j++)
        {
            if(a[j]>=48&&a[j]<=57)
            {
                temp+=a[j]-48;
                if(a[j+1]>=48&&a[j+1]<=57)
                temp*=10;


            }
            else
            {
                ara[ind++]=temp;
                temp=0;

            }


        }
        ara[ind]=temp;
        len=b.size();
        int pw=7,ara2[4]={0};
        temp=0,ind=0;


        for(j=0;j<len;j++)
        {
            if(b[j]==48||b[j]==49)
            {
                temp+=(b[j]-48)*pow(2,pw--);
            }
            else
            {
                ara2[ind++]=temp;
                temp=0;
                pw=7;
            }
        }
        ara2[ind]=temp;

        bool check=0;

        for(j=0;j<4;j++)
        {
            if(ara[j]!=ara2[j])
            {
                check=1;
                break;
            }

        }

       if(check==1) printf("Case %d: No\n",i);
       else printf("Case %d: Yes\n",i);

    }

}
