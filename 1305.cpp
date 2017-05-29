#include <bits/stdc++.h>

using namespace std;

int main()
{
   // ios_base::sync_with_stdio(0); cin.tie(0);
    int a1,a2,b1,b2,c1,c2,x=0,y=0;

    int tc;
    cin >>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        int area = (a1*(b2-c2)+b1*(c2-a2)+c1*(a2-b2));
        x=a1+c1-b1;
        y=a2+c2-b2;



       cout<<"Case "<<i<<": "<<x<<" "<<y<<" "<<(int)abs(double(area))<<endl;




    }
    return 0;
}
