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

int main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		int n;
		cin>>n;
		n--;
		int a[n],mn=0;ll sum=0,get=0;
		fr(0,n){cin>>a[i],sum+=a[i];if(sum<mn)mn=sum;}
		int vis[n+2], ans[n+1];
		clr(vis);
		n++;
		ans[0]=1-mn;
		if(ans[0]>n){cout<<-1<<e;return 0;}
		vis[ans[0]]++;
		fr(1,n)
		{
			ans[i]=ans[i-1]+a[i-1];

			if(ans[i]>n or ans[i]<=0)
			{
				cout<<-1<<e;
				get=1;
				break;
			}
			vis[ans[i]]++;
			if(vis[ans[i]]>1)
			{
				cout<<-1<<e;
				get=1;
				break;
			}
		}

		if(!get)
			fr(0,n)cout<<ans[i]<<" ";
		if(!get)cout<<e;
	}

}

