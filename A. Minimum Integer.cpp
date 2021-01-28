#include<bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
    //freopen("in.txt","r",stdin);
    int tc;
    cin>>tc;
    while(tc>0)
    {
        ll l,r,d;
        cin>>l>>r>>d;
        int i=1;
        while(1)
        {
           ll x=i*d;
            if(x>=l and x<=r)
            {
                ll div=r/d;
                i=div;
                i++;
            }
            else
            {
                cout<<x<<endl;
                break;
            }
        }
        tc--;
    }
}
