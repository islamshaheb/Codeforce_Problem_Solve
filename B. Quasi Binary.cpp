#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
//
//vector <int> vec[1001];
//vector <bool> vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
//	while(tc--)
	{
		int n;
		cin>>n;

		vector <int> vec;
		int orginal=n;
		while(orginal)
		{
			int n = orginal, t=0,p=1;
			while (n) {
				if (n % 10) t += p;
				//cout<<t<<" "<<p<<" ";
				n /= 10; p *= 10;
				//cout<<n<<endl;
        }
			//cout<<orginal<<endl;
			vec.pb(t);
			orginal -= t;

		}
		cout<<vec.size()<<endl;
		fr(0,vec.size())
			cout<<vec[i]<<" ";
			cout<<endl;
	}
}



