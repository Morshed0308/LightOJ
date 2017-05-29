#include <bits/stdc++.h>

using namespace std;
#define getint(ab) scanf("%lf",&ab)

int main()
{
    int tc;
    scanf("%d",&tc);
    double a,b,c,r;
    for(int t=1;t<=tc;t++)
    {
        getint(a);
        getint(b);
        getint(c);
        getint(r);

        double res=sqrt(r)/sqrt(r+1)*a*1.00;
        printf("Case %d: %lf\n",t,res);



    }
    return 0;


}
