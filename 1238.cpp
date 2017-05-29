#include <bits/stdc++.h>
#define MAX 100000000
#define pf printf
#define sf scanf
#define clr(visit) memset(visit,-1,sizeof(visit))
#define cl(level) memset(level,-1,sizeof(level))

using namespace std;
typedef long long int ll;
int visit[110][110];
char ara[110][110];
int level[110][110];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int row,col;


int bfs(int r,int c)
{
    int mx=0;
    level[r][c]=0;
    visit[r][c]=0;
    queue <int > q;
    q.push(r);
    q.push(c);
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
        int l=q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            int m=k+fx[i];
            int n=l+fy[i];
            if(m>=0&&m<row&&n>=0&&n<=col&&ara[m][n]!='m'&&ara[m][n]!='#'&&visit[m][n]==-1)
            {
                visit[m][n]=0;
                level[m][n]=level[k][l]+1;
                if(ara[m][n]=='a'||ara[m][n]=='b'||ara[m][n]=='c')
                {
                    mx=max(mx,level[m][n]);

                }
                q.push(m);
                q.push(n);

            }
        }

    }
    return mx;

}



int main()
{
    int tc,temp=0,res=0;
    sf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        clr(visit);
        cl(level);
        temp=0;
        sf("%d %d",&row,&col);
        for(int j=0;j<row;j++)
        {
            sf("%s",ara[j]);
        }
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<col;k++)
            {
                if(ara[j][k]=='h')
                {
                   res= bfs(j,k);
                    temp=1;
                    break;
                }
            }
            if(temp==1) break;
        }
        printf("Case %d: %d\n",i+1,res);
    }


}
