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
		int n,x;
		cin>>n>>x;
		int a[n];
		int mx=-343,div=1000000001;
		fr(0,n)
		{
			cin>>a[i];
			if(x%a[i]==0)
			{
				if(x/a[i]<div)div=x/a[i];
			}
			if(mx<a[i])mx=a[i];
		}
		//cout<<mx<<e;
		int ans=x/mx;
		if(x<=mx)ans=1;
		if(x%mx)ans++;

		int answer=min(ans,div);
		cout<<answer<<endl;
	}
}




