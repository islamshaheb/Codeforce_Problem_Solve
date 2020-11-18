#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define rfr(m,n)for(int ii=m; ii>=n; ii--)
#define fr1(k,l)for(int j=k; j<l; j++)
#define fr2(m,n)for(int k=m; k<n; k++)
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
	cin>>tc;
	//cout<<tc<<e;
	while(tc--)
	{
		int n;
		cin>>n;
		int a[n];
		int t[1018];
		bool z=0;
		clr(t);
		fr(0,n)
		{
			cin>>a[i];
			int x=a[i];
			if(t[x])z=1;
			t[x]++;
		}

		if(z){cout<<0<<e;}
		else
		{
			sort(a,a+n);
			//cout<<a[n-2]<<e;
			int mn=2000;
			fr(1,n)
			{
				int t=a[i]-a[i-1];
				if(t<mn)mn=t;
			}
			cout<<mn<<e;
		}
	}
}
