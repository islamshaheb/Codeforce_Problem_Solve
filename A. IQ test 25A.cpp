#include<bits/stdc++.h>
using namespace std;
#define fr(iii,frm,forn)for(int iii=frm; iii<forn; iii++)
#define rfr(iii,frm,forn)for(int iii=frm; iii>=forn; iii--)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define e "\n"
#define infi 10000000000000
typedef vector <int> ve;
typedef vector <bool> vb;

void solve()
{
	int n;
	cin>>n;
	int a[n],odd=0,even=0;
	fr(i,0,n)
	{
		cin>>a[i];
		if(!(a[i]%2))even++;
		else odd++;
	}


	if(odd>1)
		{
			fr(i,0,n)
			{
				if(a[i]%2==0)
				{
					cout<<i+1<<e;
					return;
				}
			}
		}
	else
		{
			fr(i,0,n)
			{
				if(a[i]%2)
				{
					cout<<i+1<<e;
					return;
				}
			}
		}
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		solve();
	}
}

