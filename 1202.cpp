#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc,r1,r2,c1,c2;
    cin >>tc;
    for(int i=1;i<=tc;i++)
    {
        cin >>r1>>c1>>r2>>c2;
        if((r1+c1)%2!=(r2+c2)%2)
        {
            printf("Case %d: impossible\n",i);
        }
        else if ((r1+c1==r2+c2)||(r1-r2==c1-c2))
            printf("Case %d: 1\n",i);
        else printf("Case %d: 2\n",i);

    }
    return 0;
}
