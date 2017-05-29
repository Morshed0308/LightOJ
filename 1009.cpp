#include <bits/stdc++.h>

using namespace std;
#define MX 20010

#define clr(vis) memset(vis,0,sizeof(vis))
#define loop(a,b) for(int a=0;a<b;a++)
#define cla(ara) memset(ara,0,sizeof(ara))


list <int> ara[MX];

//int visit[MX+10];
int vis[MX+10];
int res=0;
int x=0,y=0;
enum {NOT_VISITED, BLACK, RED};
int bfs(int node,int str)
{
    x=0,y=0;
    vis[node]=BLACK;
    x++;
   // int len=ara[node].size();
    queue <int >q;
    q.push(node);
    while(!q.empty())
    {
        int k=q.front();
        q.pop();


       // int len=ara[k].size();

        for(list<int>::iterator it = ara[node].begin(); it != ara[node].end(); it++)
        {
           // int ch=ara[k][*it];

            if(vis[*it]==NOT_VISITED)
            {
                q.push(*it);
                if(vis[node]==BLACK)
                {
                    vis[*it]=RED;
                    y++;

                }
                else {
                    vis[*it]=BLACK;
                    x++;

                }

            }

        }


    }
   // cout <<x<<" "<<y<<endl;


    res=(max(x,y));
    return res;
}



int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc,n,ans=0;
    cin >>tc;

    for(int i=1;i<=tc;i++)
    {
        cin >>n;

        for(int j=0;j<MX;j++)ara[j].clear();
        clr(vis);
        loop(j,n)
        {

            int a,b;
            cin >>a>>b;
            ara[a].push_back(b);
            ara[b].push_back(a);

        }
        loop(j,MX)
        {
            if(!ara[j].empty()&&vis[j]==NOT_VISITED)
            {
                x=0,y=0;


                ans+=bfs(j,0);


            }
           // else
          //  cout <<" bal"<<endl;

        }
        cout <<"Case "<<i<<": "<<ans<<endl;
        res=0;
        ans=0;








    }
    return 0;
}

