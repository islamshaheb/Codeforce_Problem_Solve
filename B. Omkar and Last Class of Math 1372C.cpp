#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<fornn; iii++)
#define rfr(iii,frm,fornn)for(int iii=frm; iii>=fornn; iii--)
#define itfor(iii,frm)for(int iii=frm.begin(); iii!=frm.end(); iii++)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define e "\n"
#define infi 10000000000000
#define MX 1000000010
#define F first
#define S second
typedef vector <int> ve;
typedef vector <bool> vb;
void solve()
{
	int n,prime=1;
	cin>>n;
	if(n%2==0)cout<<n/2<<" "<<n/2<<e;
	else
	{
		int prime=1,factor=0;
		fr(i,2,sqrt(n)+1)
		{
			if(n%i==0)
			{
				prime=1;
				fr(j,2,i)
				{
					if(i%j==0){prime=0;break;}
				}
				if(prime){factor=i;break;}
			}

		}

		if(!factor)
		cout<<n-1<<" "<<1<<e;
		else cout<<n/factor<<" "<<n-n/factor<<e;

	}

}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)solve();

}
