#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int divide(int x,int y)
{
    int ct=0,ct1=0;
    if(x==y)
    {
        if(x%3==0||(x+1)%3==0)
        {
            ct=1;

        }
        else ct=0;

    }
    else
    {

        if(y%3==0||(y-1)%3==0)
        {
             ct=y/3;

            ct*=2;


        }
        else if((y+1)%3==0)
        {
            ct=y/3;
            ct=ct*2+1;
        }



    }
    return ct;

}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc;
    scanf("%d",&tc);

    for(int i=1;i<=tc;i++)
    {
        int a,b,temp=1,sum=0,ct=0,sum1=0;
        scanf("%d %d",&a,&b);
        if(a==b) ct=divide(a,b);

        else
        {
            sum=divide(1,b);
            sum1=divide(1,a-1);

            ct=sum-sum1;
        }
        printf("Case %d: %d\n",i,ct);

    }
}
