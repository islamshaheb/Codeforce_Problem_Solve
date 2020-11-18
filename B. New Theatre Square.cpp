#include<bits/stdc++.h>
using namespace std;
#define fr(frm,forn)for(int i=frm; i<forn; i++)
#define rfr(frm,forn)for(int ii=frm; ii>=forn; ii--)
#define fr1(fork,forl)for(int j=fork; j<forl; j++)
#define fr2(frm,forn)for(int k=frm; k<forn; k++)
#define ll long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(setaa) memset(seta,0,sizeof(seta))
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
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		char a[n][m];
		int sum=0;
		fr(0,n)
		{
			fr1(0,m)
			{
				cin>>a[i][j];
				if(a[i][j]=='.')sum+=x;
			}
		}
		int sum1=0,to=0;
		fr(0,n)
		{
			for(int j=0; j<m;)
			{
				//cout<<j<<e;
				if( j<m-1 and a[i][j]=='.' and a[i][j+1]=='.')
					sum1+=y,j+=2;
				else
				{

					if(a[i][j]=='.')to++;
					j++;
				}

			}
		}

		int ans=to*x+sum1;
		if(sum==0 and ans==0)cout<<0<<e;
		else if(sum==0 and ans!=0)cout<<ans<<e;
		else if(sum!=0 and ans==0)cout<<sum<<e;
		else
		{
			if(sum>ans)cout<<ans<<e;
			else cout<<sum<<e;
		}
	}

}

