#include<bits/stdc++.h>
using namespace std;
#define fr(iii,frm,forn)for(int iii=frm; iii<forn; iii++)
#define rfr(iii,frm,forn)for(int iii=frm; iii>=forn; iii--)
#define ll long long int
#define ll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(setaa) memset(seta,0,sizeof(seta))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		ll aa,bb;
		cin>>aa>>bb;
		ll b=max(aa,bb);
		ll a=min(aa,bb);

		if(a==b)cout<<0<<e;
		else
		{
			ll ans=0;
			while(a!=b)
			{
			//	cout<<a<<" "<<b<<e;
				int get=0;
				ll b1=b/8,b2=b/4,b3=b/2;
				if(b%8==0 and b1>=a)
				{
					b/=8;
					ans++;
					get=1;
				}
				else if(b%4==0 and b2>=a)
				{
					b/=4;
					ans++;
					get=1;
				}
				else if(b%2==0 and b3>=a)
				{
					b/=2;
					ans++;
					get=1;
				}
				if(!get)break;
			}
			if(a==b)cout<<ans<<e;
			else cout<<-1<<e;
		}
	}
}
