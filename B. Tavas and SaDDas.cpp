#include<bits/stdc++.h>

using namespace std;
#define ll long long int
main()
{
//while(1)
{

    string s;
    cin>>s;

    int x=s.length();

    ll sum=0,ans;
    if(x!=1 and s[0]!=4 and s[0]!=7)
    {
    for(int i=1;i<x; i++)
    {
        sum+=pow(2,i);
    }

    ll actual[15];
    for(int i=0; i<x; i++)
    {
        int val;
        if(s[i]=='4')
            actual[i]=0;
        else
            actual[i]=1;

    }

    int j;
    ll decimal=0;
    for(int i=x-1, j=0; i>=0;j++,i--)
    {
        decimal+=actual[j]*pow(2,i);
        //cout<<decimal<<endl;

    }

     ans=sum+decimal+1;
    }
    else
    {
        if(s[0]=='4')
            ans=1;
        if(s[0]=='7')
            ans=2;
    }

    cout<<ans<<endl;
}



}
