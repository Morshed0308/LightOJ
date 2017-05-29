#include <bits/stdc++.h>
#define clr(ara) memset(ara,0,sizeof(ara))
#define MX 1050
#define PM 1050
using namespace std;

typedef long long int ll;

int ara[1050],prime[1005];



int divisor()
{
    int j,i;
    int cnt=0;
    for(i=1; i<=1000; i++)
    {
        cnt=0;
        for(j=1; j*j<=i; j++)
        {
            if(i%j==0&&i/j!=j)
                cnt+=2;

            else if(i%j==0) cnt++;
        }


        ara[i]+=cnt;
    }
    int k=2;

    for(j=2; j<=32; j++)
    {
        for(i=1000; i>=2; i--)
        {
            if(ara[i]==j)
            {
                prime[k++]=i;

            }
        }
    }
    prime[1]=1;


}

int main()
{

    divisor();
    int tc;




    scanf("%d",&tc);
    int num;

    for(int i=1;i<=tc;i++)
    {
        scanf("%d",&num);
        printf("Case %d: %d\n",i,prime[num]);



    }
}
