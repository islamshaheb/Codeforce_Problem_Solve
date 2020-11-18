
#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
   int tc;
    cin>>tc;
    for(int i=1;i<=tc; i++)
    {
        ll a,b,x,y;
        cin>>a>>b>>x>>y;
        ll f,s;
        s=abs(a-x);
        f=abs(b-y);
        if(s==f)
        {
           // if(s==0)

            cout<<"Case "<<i<<": "<<__gcd(s,f)+1<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<__gcd(s,f)+1<<endl;
        }

    }

}
