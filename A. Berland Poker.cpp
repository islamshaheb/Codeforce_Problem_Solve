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
		int n,m,k;
		cin>>n>>m>>k;
		int card=n/k,p;
		if(card>=m)
		{
			cout<<m<<e;
		}
		else
		{

			int baki=m-card;
			int bakip=k-1;

			{
			int bakic=baki/bakip;
			int mx=bakic;
			if(baki%bakip!=0)
				mx++;
			cout<<card-mx<<e;
			}


		}
	}
}

