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
		int n,m;
		cin>>n>>m;
		if(n==1){cout<<0<<e;continue;}
		if(n<=2)cout<<m<<e;
		else
		{
			//if(m%2 and n==4)cout<<2*m-1<<e;
			//else
			cout<<m*2<<e;
		}

	}
}




