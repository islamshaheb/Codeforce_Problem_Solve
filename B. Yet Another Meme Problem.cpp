#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int maxpow(ll x)
{
    int ans=0;
    while(x>0)
    {
        x/=10;
        ans++;
    }
    ans--;
    return ans;

}

main()
{
    //freopen("in.txt","r",stdin);
    int tc;
    cin>>tc;
    while(tc>0)
    {
       ll a,b;
        cin>>a>>b;


        ll ans = maxpow(b+1);
        cout<<a*ans<<endl;

       // cout<<ans<<endl;
        tc--;

    }

}
