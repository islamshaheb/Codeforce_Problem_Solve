

#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define lll long long unsigned int

main()
{
	//freopen("input.txt","r",stdin);
	int tc;
	cin>>tc;
	while(tc>0)
	{
		ll x,y,a,b;
		cin>>x>>y>>a>>b;
		if((x<0 and y>0) or (x>0 and y<0))
		{
			ll ans=a*abs(x)+a*abs(y),ans1;
			if(x<0)
			{
				ll n=y*b;
				ll m=abs(x)+abs(y);
				ll mm=m*a;
				ans1=n+mm;
			}
			else
			{
				ll n=x*b;
				ll m=abs(x)+abs(y);
				ll mm=m*a;
				ans1=n+mm;
			}

			//ll ans1=a*abs(x)+a*abs(y);
			cout<<ans<<" "<<ans1<<endl;
			if(ans<ans1)
			 cout<<ans<<endl;
			else cout<<ans1<<endl;
		}
		else
		{

			ll t[5];
			t[0]=abs(x)*a+abs(y)*a;
			//t[3]=abs(x)*b+abs(y)*b;

			if(x>y)t[1]=abs(y)*b+abs(x-y)*a;
			else t[1]=abs(x)*b+abs(x-y)*a;

			if(x>y)t[2]=abs(x)*b+abs(x-y)*a;
			else t[2]=abs(y)*b+abs(x-y)*a;

			//t[4]=


			ll mn=2000000000000000000;
			fr(0,3)
			{//cout<<t[i]<<endl;
				if(t[i]<mn)
					mn=t[i];
			}
			cout<<mn<<endl;
		}

	 tc--;
	}
}

