
#include<bits/stdc++.h>
using namespace std;
#define ll long long signed

main()
{
    //freopen("in.txt","r",stdin);
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
            cin>>a[i];
       bool ans=true,inc=false,dec=false,ok;
//        //if(a[1]==n)
//        {
//
//            {
//                 if(a[1]<a[2] and (a[1]==1 and a[2]!=n))inc=true;
//                 if((a[1]==n and a[2]==1))inc=true;
//            }
//
//            {
//                if(a[1]>a[2] and (a[1]==n and a[2]!=n))dec=true;
//                if((a[1]==1 and a[2]==n))dec=true;
//            }
//        }

//        if(a[1]+1==a[2] or a[1]-1==a[2])
//        {
//            ok=true;
//        }
//        else
//        {
//            ok=false;
//            ans=false;
//        }
//
//        if(inc and ok)


        for(int i=1; i<n; i++)
        {
            if((n==a[i] && a[i+1]==1) or (a[i]==1 and a[i+1]==n))
            {
              continue;
            }
            else if(a[i]+1==a[i+1] or a[i]-1==a[i+1])
            {
              continue;
            }
            else
            {
                ans=false;
                break;
            }

        }

        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";





        tc--;
    }
}
