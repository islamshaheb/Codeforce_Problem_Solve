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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		string s;
		int n;
		cin>>s>>n;
		if(s[0]=='b' and n==1)
			cout<<"R\n";
		if(s[0]=='b' and n==2)
			cout<<"L\n";
		if(s[0]=='f' and n==1)
			cout<<"L\n";
		if(s[0]=='f' and n==2)
			cout<<"R\n";
	}
}




