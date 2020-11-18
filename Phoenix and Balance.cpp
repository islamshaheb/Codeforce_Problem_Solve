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
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		ll n;
		cin>>n;
//		if(n==2)cout<<2<<endl;
//		else if(n==3)cout<<2<<endl;
//		else
		{
			ll ans=0,middle=n/2;
			ll an=pow(2,n);

			fr(1,middle)an+=pow(2,i);


			fr(middle,n)
			ans+=pow(2,i);
			cout<<abs(an-ans)<<endl;

//			an=pow(2,n);
//			fr(1,middle)cout<<i<<endl;
////
//
//			fr(middle,n)
//			cout<<i<<endl;
//			cout<<abs(an-ans)<<endl;
		}
	}
}


