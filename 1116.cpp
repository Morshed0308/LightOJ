#include <bits/stdc++.h>


using namespace std;

typedef long long int ll;




ll p=1;



int divisor(ll num)
{
    int in=0,cntr=0;
    //ll sq=sqrt(num);
   // cout <<sq<<endl;
    for(int i=0;2*2<num;i++)
    {

        if(num%2==0)
        {

            while(num%2==0)
            {
               p*=2;

                num=num/2;
            }

           // cout <<p<<endl;


        }
        in++;
        break;

    }
   // if(num>1)
 //   {

  //  }
   // cout <<aray[in]<<endl;
    return in;





}

int main()
{
  //  sieve();
    int tc;
    ll sum=1;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        ll a;
        scanf("%lld",&a);
        if(a%2==1)
        {
            printf("Case %d: Impossible\n",i);
            continue;
        }

        int ind=divisor(a);

        printf("Case %d: %lld %lld\n",i,a/p,p);
        p=1;
    }
    return 0;
}
