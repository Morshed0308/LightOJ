#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    int tc;
    scanf("%d",&tc);
    ll s;
    for(int i=1;i<=tc;i++)
    {
        scanf("%lld",&s);
        double num=sqrt(s);
        num=ceil(num);
        ll a=(ll)num;
        ll temp=s-(num*num);
        temp=abs(temp);
        if(a%2==1){
        if(temp<num) {
            printf("Case %d: %lld %0.0lf\n",i,temp+1,num);
        }
        else{
            temp=s-((num-1)*(num-1));
            printf("Case %d: %0.0lf %lld\n",i,num,temp);

        }
        }
        else
        {
             if(temp<num) {
            printf("Case %d: %0.0lf %lld\n",i,num,temp+1);
        }
        else{
            temp=s-((num-1)*(num-1));
            printf("Case %d: %lld %0.0lf\n",i,temp,num);

        }

        }




    }
}
