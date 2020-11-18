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
	cin>>tc;
	while(tc--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		ll in=(b-a)+x,out=(d-c)+y;
		if((x1 == x2 && (a || b)) || (y1 == y2 && (c || d)))
			{
				cout<<"NO\n";
				continue;
	     	}

		if((x1<=in and in<=x2) and (y1<=out and out<=y2) and (x2>x1||a+b==0)&&(y2>y1||c+d==0) )cout<<"YES\n";
		else cout<<"NO\n";
	}
}





