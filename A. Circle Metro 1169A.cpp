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

int main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
//	while(tc--)
	{
		int n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;

		for(int i=a,j=c;;)
		{
			if(i==j){cout<<"YES\n";return 0;}
			if(i==b or j==d)break;
			if(i==n)i=1;
			else i++;
			if(j==1)j=n;
			else j--;
			//cout<<i<<" "<<j<<endl;
			if(i==j){cout<<"YES\n";return 0;}

		}
		cout<<"NO\n";
	}
}
