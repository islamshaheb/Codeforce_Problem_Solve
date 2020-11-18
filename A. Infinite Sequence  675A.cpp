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
	//cin>>tc;
	//while(tc--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int dif=b-a;
		if( (dif>0 and c<0) or (dif<0 and c>0))cout<<"NO\n";
		else
		{
			if(!dif)cout<<"YES\n";
			else if(!c)cout<<"NO\n";
			else
			if(!(dif%c))cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}




