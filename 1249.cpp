#include <bits/stdc++.h>

using namespace std;
typedef struct
{
    char name[100];
    int h,w,l;

}node;
int c=0;

int main()
{
    bool check=0;
    int tc,n;
    scanf("%d",&tc);
    char n1[100],n2[100];

    node var[1000];
    int temp=0,tmp=0,num1=0,num2=0;

    for(int t=1;t<=tc;t++)
    {
        vector <int>ve;
        scanf("%d",&n);
        for(int in=1;in<=n;in++)
        {
            scanf("%s %d %d %d",&var[in].name,&var[in].h,&var[in].l,&var[in].w);
            ve.push_back(var[in].h*var[in].l*var[in].w);

        }
        sort(ve.begin(),ve.end());
        if(ve[0]==ve[n-1])
        {
            printf("Case %d: no thief\n",t);
            continue;

        }
        else
        {

            for(int i=1;i<=n;i++)
            {
                if(ve[0]==var[i].h*var[i].l*var[i].w)
                {
                    strcpy(n1,var[i].name);

                }
                if(ve[n-1]==var[i].h*var[i].l*var[i].w)
                {
                    strcpy(n2,var[i].name);
                }
            }
        }
        printf("Case %d: %s took chocolate from %s\n",t,n2,n1);








    }
    return 0;
}
