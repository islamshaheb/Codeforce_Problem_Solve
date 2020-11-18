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
	//while(1)
	{
	int tc,cse=0;
	ll n,m,mn,mx;
	cin>>n>>m;
	ll per_team=n/m;
	ll last_team=per_team;
	ll rem=n%m;
	per_team=per_team+1;
	mn=(((per_team-1)*per_team)/2)*rem;
	mn+=(((last_team-1)*last_team)/2)*(m-rem);

	ll rem_team=n-(m-1);
	mx=(rem_team*(rem_team-1))/2;

	cout<<mn<<" "<<mx<<endl;
	}

}


