#include <bits/stdc++.h>
#define clr(a) memset(ara,0,sizeof(ara);
#define MAX 1000000
using namespace std;

typedef long long int ll;

//int  ara[MAX];
//bool stat[MAX];
//int cnt=0,p=0;




ll csod(ll num)
{
    ll sum=0,j;

    for(ll i=2;i*i<=num;i++)
    {
        j=num/i;

        sum+=((j+i)*(j-i+1))/2;
        sum+=(i*(j-i));
    }
    return sum;


}



int main()
{
    //sieve();
    ll a,b,c,num=0,tc=0,sum=0;

    scanf("%lld",&tc);

    for(int i=1;i<=tc;i++)
    {
        scanf("%lld",&num);
        sum=csod(num);

        printf("Case %d: %lld\n",i,sum);

    }


}
