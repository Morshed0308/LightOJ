#include <bits/stdc++.h>
#define clr(vis) memset(vis,0,sizeof(vis))
#define clrr(check) memset(check,-1,sizeof(check))

using namespace std;
int check[1005];
//bool vis[1005];
vector <int>vec[1005];

int bfs(int src)
{
    //vis[src]=1;
    check[src]=0;
    queue <int >q;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        int len=vec[u].size();
        for(int i=0;i<len;i++)
        {
            int k=vec[u][i];
            if(check[k]<0)
            {

                check[k]=check[u]+1;
                q.push(k);
            }
        }
    }
}

int main()
{
   // freopen("output1111.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    int k,n,m;
    int kara[1008];

    for(int i=1;i<=tc;i++)
    {
        clrr(check);
        scanf("%d %d %d",&k,&n,&m);

        for(int in=1;in<=k;in++)
        {
            scanf("%d",&kara[in]);
        }
        for(int in=0;in<m;in++)
        {
            int temp,tmp;
            scanf("%d %d",&temp,&tmp);
            vec[temp].push_back(tmp);
        }
        int res=INT_MAX;

        for(int in=1;in<=k;in++)
        {
            bfs(kara[in]);

           // clr(vis);
            int ctr=0;
            for(int ind=1;ind<=n;ind++)
            {
                if(check[ind]>=0)
                {
                    ctr++;

                }
            }
            if(res>ctr) res=ctr;
            clrr(check);


        }

        printf("Case %d: %d\n",i,res);
        for(int in=0;in<=1000;in++)
        {
            vec[in].clear();
        }

    }


    return 0;
}
