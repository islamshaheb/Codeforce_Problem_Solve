#include<bits/stdc++.h>
using namespace std;
#define long long int

main()
{
    int n,t,c,ans=0,pointer=0,x=0;
    cin>>n>>t>>c;
    int a[n];
    bool ok=false;

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        if(a[i]<=t)
        {
            x++;
            ok=false;
        }
        else
        {

            if(x>=c)
                ans+=(x-c)+1;
            x=0;
            ok=true;

        }

    }
    if(!ok)
    {
        if(x>=c)
           ans+=(x-c)+1;
    }


    cout<<ans<<endl;
}
