#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==1||b==1)
        {
            printf("Case %d: %d\n",i,a*b);
            continue;

        }
        if(a==2||b==2)
        {
            int temp=0;
            if(a==2)temp=b;
            else temp=a;

            if(temp%4==0)
            {
                printf("Case %d: %d\n",i,temp);
                continue;


            }
            else if(temp%4==2)
            {

                printf("Case %d: %d\n",i,temp+2);
                continue;
            }
            else if(temp%4==1||temp%4==3)
            {
                printf("Case %d: %d\n",i,temp+1);
                continue;
            }

        }
        else
        {
            printf("Case %d: %d\n",i,(a*b+1)/2);

        }
    }

}
