#include <bits/stdc++.h>
#define SZ 1000001
using namespace std;
double  ara[SZ];
int main()
{
    int a,b;
    for(int i=1;i<=SZ;i++)
    {
        ara[i]=log10(i)+ara[i-1];
    }
    int tc;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        scanf("%d %d",&a,&b);
        printf("Case %d: %0.0f\n",i+1,floor(ara[a]/log10(b))+1);


    }
    return 0;


}
