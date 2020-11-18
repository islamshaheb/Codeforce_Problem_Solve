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
	//cin>>tc;
	//while(tc--)
	{
		int m,n;
		cin>>n>>m;
		int left=m-1,right=n-m;

		if(left<right and m!=n)
		{
			cout<<m+1<<endl;
		}
		else
		{
			if(m==1 and n>1)cout<<2<<endl;
			else if(m!=1)cout<<m-1<<endl;
			else cout<<1<<endl;

		}

	}
}



