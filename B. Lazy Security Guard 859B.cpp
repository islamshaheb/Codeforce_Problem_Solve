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
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		int n;
		cin>>n;
		int sqt=sqrt(n);
		//cout<<sqt*4<<endl;
		int total=sqt*4;
		int rem=n-(sqt*sqt);
		int rem1=rem/sqt;
		if(rem%sqt)rem1++;
		total+=rem1*2;

		cout<<total<<endl;

	}
}




