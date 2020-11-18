
#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

vector <int> vec[1001];
vector <bool> vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a+d==b and b==c)cout<<"YES\n";
		else if(b+c==a and a==d)cout<<"YES\n";
		else if(a+c==b and b==d)cout<<"YES\n";
		else if(b+d==a and a==c)cout<<"YES\n";
		else cout<<"NO\n";
	}
}


