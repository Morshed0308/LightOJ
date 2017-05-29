#include <bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define getint(n) scanf("%d",&n)

using namespace std;

deque <int>q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    int n=0,m=0;
    string str;
    int num=0,cntr=0;
    for(int i=0;i<tc;i++)
    {
        deque <int>q;
        cntr=0;

        cin >>n>>m;

        for(int j=0;j<m;j++)
        {
            if(j==0) cout <<"Case "<<i+1<<":"<<endl;
            cin >>str;
            if(str=="pushLeft")
            {
                cin >>num;

                if(cntr==n)
                {
                    cout <<"The queue is full\n";
                    continue;
                }
                else
                q.push_back(num);
                cout <<"Pushed in left: "<<num<<endl;
                cntr++;

            }
            else if(str=="pushRight")
            {

                cin >>num;

                if(cntr==n)
                {
                    cout <<"The queue is full"<<endl;
                    continue;
                }
                q.push_front(num);

                cout <<"Pushed in right: "<<num<<endl;
                cntr++;

            }
             else if(str=="popLeft")
             {
                 //cout <<cntr<<endl;
                 if(cntr==0)
                 {
                     cout <<"The queue is empty\n";
                    continue;

                 }
                 cout <<"Popped from left: "<<q.back()<<endl;
                 cntr--;
                 q.pop_back();

             }
             else if(str=="popRight")
             {
                // cout <<cntr<<endl;
                 if(cntr==0)
                 {
                     cout <<"The queue is empty\n";
                    continue;

                 }
                 cout <<"Popped from right: "<<q.front()<<endl;
                 cntr--;
                 q.pop_front();

             }



        }


    }
    return 0;

}
