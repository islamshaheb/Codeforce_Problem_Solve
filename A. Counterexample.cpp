#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
   ll l,r,i,d=0;
   cin>>l>>r;
   bool ans=false;

	if(l%2)
	{
		ll a=l+1;
		ll b=l+2;
		ll c=l+3;
		if(c<=r)
            cout<<a<<" "<<b<<" "<<c;
		else
            cout<<-1;
	}
	else
	{
		ll a=l;
		ll b=l+1;
		ll c=l+2;
		if(c<=r)
            cout<<a<<" "<<b<<" "<<c;
		else
            cout<<-1;
	}

   }



