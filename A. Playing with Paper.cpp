#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
        {
    ll a,b,ans=0;
    cin>>a>>b;

        while(1)
        {
           ll div=a/b;
           ll rem=a%b;
           ans+=div;
           a=b;
           b=rem;
           if(rem==0)
            break;

        }


        cout<<ans<<endl;
        }


    }



