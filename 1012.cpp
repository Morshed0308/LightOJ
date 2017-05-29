#include <bits/stdc++.h>
#define PB push_back
#define MAX 1000
//#define valid(nx,ny) nx>=0&&nx<row&&ny>=0&&ny<col
int r=0,c=0;


int mx[]={1,-1,0,0};
int my[]={0,0,1,-1};



using namespace std;
string mat[50];
int visit[50][30];



int bfs(int x,int y)
{
    int cnt=1;
    memset(visit,0,sizeof(visit));
    visit[x][y]=1;
    queue <int> q;
    q.push(x);
    q.push(y);
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
        int l=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int m=k+mx[i];
            int n=l+my[i];
            if(m>=0&&m<r&&n>=0&&n<c&&mat[m][n]=='.')
            {
                if(visit[m][n]==0){
                    cnt++;
                    visit[m][n]=1;
                    q.push(m);
                    q.push(n);
                }


            }
        }
    }
    return cnt;

}



int main()
{
    int tc,x,y;
    char ara[30][100];
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        scanf("%d %d",&c,&r);
        for(int j=0;j<r;j++)
        {
            cin >>mat[j];
        }
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                if(mat[j][k]=='@')
                {
                    x=j,y=k;
                    break;
                }
            }

        }

        int res=bfs(x,y);
        printf("Case %d: %d\n",i,res);
    }
    return 0;





}
