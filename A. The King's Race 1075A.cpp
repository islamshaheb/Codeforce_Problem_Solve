#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
typedef vector <int> ve;
typedef vector <bool> vb;
ve vec[1001];
vb vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
//	cin>>tc;
	//while(tc--)
	{
		ll n,x,y;
		cin>>n>>x>>y;
		ll dis1,dis2;
		dis1=abs(x-1)+abs(y-1);
		dis2=abs(n-x)+abs(n-y);
		if(dis1<=dis2)cout<<"white\n";
		else cout<<"Black\n";
	}
}



