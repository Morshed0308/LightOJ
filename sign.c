#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int n,m,result=0;
    int t=0,i=0,c=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
            scanf("%lld %lld",&n,&m);
            c=n/2;
            result=m*c;
            printf("Case %d: %lld\n",i,result);
            c=0,result=0;
    }
    return 0;
}
