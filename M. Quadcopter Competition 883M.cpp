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
ve vec[1001];
vb vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)8
	{
		int x,y,m,n;
		cin>>x>>y>>n>>m;

		int dis1=abs(x-n);
		int dis2=abs(y-m);
		dis1++,dis2++;
		if(x==n or y==m)cout<<dis1*2+dis2*2+2<<e;
		else cout<<dis1*2+dis2*2<<e;
	}
}




