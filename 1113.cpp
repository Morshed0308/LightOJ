#include <bits/stdc++.h>
#define SZ 1100

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    string cmd,tmp="http://www.lightoj.com/";
    string x;

    int tc;
    cin >>tc;



    for(int i=1;i<=tc;i++)
    {
        tmp="http://www.lightoj.com/";
        stack <string> f,b;

        cin >>cmd;

        cout <<"Case "<<i<<":\n";
        while(cmd!="QUIT")
        {

            if(cmd=="VISIT")
            {
                cin >>x;
                b.push(tmp);
                tmp=x;
                cout <<x<<endl;
                while(!f.empty()) f.pop();


            }
            else if(cmd=="BACK")
            {
                if(b.empty())
                {
                    cout <<"Ignored"<<endl;
                }
                else
                {
                    f.push(tmp);
                    cout <<b.top()<<endl;
                    tmp=b.top();
                    b.pop();

                }

            }
            else if(cmd=="FORWARD")
            {
                if(f.empty()) cout <<"Ignored"<<endl;
                else
                {
                    b.push(tmp);
                    cout <<f.top()<<endl;
                    tmp=f.top();
                    f.pop();


                }
                //if()


            }
            else if(cmd=="QUIT")
            {
                break;

            }
            cin >>cmd;


        }

    }

    return 0;
}
