#include <bits/stdc++.h>
#define SZ 1e7
using namespace std;
typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc;
    int a,b,num=0,num1=0,temp=0,x=0,y=0;
    vector <int>ara;
    char ch;
    cin >>tc;
    for(int i=1;i<=tc;i++)
    {
        vector <int>ara;
        temp=0;
        cin>>a>>b;
        for(int j=0;j<a;j++)
        {
            int t;
            cin >>t;
            ara.push_back(t);
        }
        for(int j=0;j<b;j++)
        {
            cin >>ch;

            if(ch=='S')
            {
                cin >>num;
                for(int k=0;k<a;k++)
                {
                    ara[k]=(ara[k]+num);

                }


            }
            else if(ch=='M')
            {
                 cin >>num;
                 for(int k=0;k<a;k++)
                 {
                     ara[k]*=num;

                 }



            }
            else if(ch=='D')
            {
                cin >>num;
                for(int k=0;k<a;k++)
                {
                    ara[k]/=num;

                }

            }
            else if(ch=='R')
            {
               reverse(ara.begin(),ara.end());
            }
            else if(ch=='P')
            {
                cin >>num>>num1;

                x=ara[num];
                ara[num]=ara[num1];
                ara[num1]=x;


            }
        }
        cout <<"Case "<<i<<":"<<endl;
        for(int j=0;j<a;j++)
        {
            if(j!=a-1)
            cout <<ara[j]<<" ";
            else cout <<ara[j]<<endl;
        }



    }
    return 0;



}
