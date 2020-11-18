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
		int n;
		cin>>n;
	    int a[n];
	    fr(0,n)cin>>a[i];
	    sort(a,a+n);

	    int mid=n/2;
	    ve vec;

	   // fr(0,n)
	    {
	    	for(int j=0,k=n-1; j<mid; j++,k--)
			{
				vec.pb(a[k]);
				vec.pb(a[j]);
			}
	    }
	    if(n%2)vec.pb(a[mid]);

	    rfr(vec.size()-1,0)cout<<vec[ii]<<" ";
	    cout<<e;
	}
}

