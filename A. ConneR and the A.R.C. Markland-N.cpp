
#include<bits/stdc++.h>

using namespace std;
#define ll long long int
main()
{
   // freopen("in.txt","r",stdin);
    int tc;
    cin>>tc;

    while(tc>0)
    {
    ll n,s,k;
    cin>>n>>s>>k;
    vector <bool> vis;

    vis.assign(n+50,false);
    int b[k];
    int i;

     for(i=1; i<=k; i++)
    {
        int te;
        cin>>te;
        vis[te]=true;
    }

    ll f=-11,g=-11;
     for(i=s; i<=n; i++)
    {
       if(!vis[i])
       {
           f=i;
           break;
       }
    }


     for(i=s; i>=1; i--)
    {
       if(!vis[i])
       {
           g=i;
           break;
       }
    }

    int ans,ans1;

    if(f==-11)
    {
       // ll ans=f-s;
        ll ans1=s-g;
        cout<<ans1<<endl;

    }

     else if(g==-11)
    {
        ll ans=f-s;
        cout<<ans<<endl;
        //ll ans1=s-g;

    }
    else
    {
        ll ans=f-s;
        ll ans1=s-g;

         if(ans<ans1)
    {

        cout<<ans<<endl;
    }
    else
    {

        cout<<ans1<<endl;

    }
    }


   // cout<<f<<"  "<<g<<endl;

    tc--;
    }


}
