#include<bits/stdc++.h>
using namespace std;
#define ll long long signed

main()
{
    //while(1)
    {
    string s;
    cin>>s;
    int len=s.length();
    //cout<<"len "<<len<<endl;
    ll x,y=0;
    int j=0;
    for(int i=1; i<len; i++)
    {
        if(s[i]=='1')
        {
            y=12;
        }
    }

    int ans=0;
    if(y==12)
    {
        ans=len/2;
        if(len%2!=0)
        ans++;
    }
    else
    {
        ans=len/2;
    }
    cout<<ans<<endl;
    }
}
