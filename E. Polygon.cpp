#include<bits/stdc++.h>
using namespace std;
#define fr(frm,forn)for(int i=frm; i<forn; i++)
#define rfr(frm,forn)for(int ii=frm; ii>=forn; ii--)
#define fr1(fork,forl)for(int j=fork; j<forl; j++)
#define fr2(frm,forn)for(int k=frm; k<forn; k++)
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
	//cout<<tc<<e;
	while(tc--)
	{
		int n;
		cin>>n;
		char a[n][n];
		fr(0,n)fr1(0,n)cin>>a[i][j];

		int get=0;
	//	if(a[0][0]=='1')get=1;
		fr(0,n-1)
		{
			fr1(0,n-1)
			{ //cout<<"_"<<i<<"_"<<j<<e;
				if(a[i][j]=='1')
				{
					if(a[i][j+1]=='0' and a[i+1][j]=='0'){get=1;break;}
				}
			}
		}
		if(get)cout<<"NO\n";
		else cout<<"YES\n";

	}
}

