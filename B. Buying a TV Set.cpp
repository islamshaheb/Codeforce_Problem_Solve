#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
//    freopen("in.txt","r",stdin);
//    int xx;
//    cin>>xx;
//    while(xx>0)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        ll gcd=__gcd(c,d);

        ll x=c/gcd;
        ll y=d/gcd;

        x=a/x;
        y=b/y;

        //cout<<gcd<<" "<<y<<endl;

        if(x<=y)
            cout<<x<<endl;
        else
            cout<<y<<endl;
       // xx--;
    }

}
