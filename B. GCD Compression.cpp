#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<fornn; iii++)
#define rfr(iii,frm,fornn)for(int iii=frm; iii>=fornn; iii--)
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
	//cout<<n<<e;
	int l=n*2;
	int a[l];
	frr(0,l)cin>>a[i];
	ve x,y;
	frr(0,l)
	{
		if(x.size()==n-1)break;
		if(a[i]<0)continue;
		int temp=a[i];
		int jur=0,bijur=0;
		if(temp%2)bijur=1;
		else jur=1;
		fr(j,i+1,l)
		{

			if(a[j]>=0)
			{
				if(jur and a[j]%2==0)
				{
					x.pb(i+1);
					y.pb(j+1);
					a[j]=-43;
					break;
				}
				else if(bijur and a[j]%2==1)
				{
					x.pb(i+1);
					y.pb(j+1);
					a[j]=-34;
					break;
				}
			}
		}

	}
	frr(0,x.size())cout<<x[i]<<" "<<y[i]<<e;
}

main()
{
//	freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		solve();
	}
}
