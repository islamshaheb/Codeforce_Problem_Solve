#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define rfr(m,n)for(int i=n; i>=0; i--)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;

		ll left=a-b;
		if(left<=0)cout<<b<<e;
		else
		{
			if(c-d<=0)cout<<-1<<e;
			else
			{
				ll ghumai=c-d;
				ll gum=left/ghumai;
				if(left%ghumai)gum++;

				gum=gum*c;
				gum+=b;
				cout<<gum<<e;
			}
		}
	}
}



