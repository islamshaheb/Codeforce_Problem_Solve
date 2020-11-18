#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
   // while(1)
    {
    ll a,b;
    cin>>a>>b;

    if(a==b)cout<<1<<endl;
    else
    {
        ll rem=1;
        for(ll i=a+1; i<=b; i++)rem=(rem*i)%10,if(rem==0)break;
        cout<<rem<<endl;

    }

    }
}
