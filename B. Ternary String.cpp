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
	int i=0;
	cin>>tc;
		//string s;
		//getline(cin,s);
	while(tc--)
	{
		string s;
		cin>>s;
		//getline(cin,s);
		int l=s.length(),one=0,two=0,thr=0,o=0,t=0,th=0,mn=999999999;
		fr(0,l)
		{
			if(s[i]=='1')one++;
			if(s[i]=='2')two++;
			if(s[i]=='3')thr++;

			if(s[i]=='1')o=i+1;
			if(s[i]=='2')t=i+1;
			if(s[i]=='3')th=i+1;

			if(o and t and th)
			{
				//cout<<o<<" "<<t<<" "<<th<<e;
				int mxx=max(t,th);
				int mx1=max(o,mxx);

				int mnn=min(t,th);
				int mn1=min(o,mnn);

				int cur=(mx1-mn1)+1;
				if(cur<mn)
				{
						mn=cur;

//				if(s[i]=='1')o=i+1;
//				else o=0;
//
//				if(s[i]=='2')t=i+1;
//				else t=0;
//
//				if(s[i]=='3')th=i+1;
//				else th=0;
				}
				//cout<<o<<" "<<t<<" "<<th<<e;
				//o=0,t=0,th=0;
			}

		}
		//cout<<i++<<e;
		if(!one or !two or !thr)cout<<0<<e;
		else cout<<mn<<e;
	}
}



