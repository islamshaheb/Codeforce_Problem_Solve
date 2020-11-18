#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define rfr(m,n)for(int ii=m; ii>=n; ii--)
#define fr1(k,l)for(int j=k; j<l; j++)
#define fr2(m,n)for(int k=m; k<n; k++)
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
	while(tc--)
	{
		int aa[200001];
		clr(aa);
		int n;
		cin>>n;
		int s[n+1],ans=1,mx=-232;
		fr(0,n)
		{
			cin>>s[i];
			aa[s[i]]++;
			////cout<<aa[s[i]]<<e;
			if(aa[s[i]]>2)ans=0;
			if(aa[s[i]]>1)if(s[i]>mx)mx=s[i];

		}

		if(ans)
		{
			 int first=mx;
			 int sec=n-first;
			 //cout<<mx<<" "<<sec<<e;


			 ve a,b;
			 fr(0,first)
			 {
			 	a.pb(s[i]);
			 }
			 sort(a.begin(),a.end());
//			 fr(0,a.size())cout<<a[i]<<" ";
//			 cout<<e;
			 int get_a=0,times=0;
			 fr(0,a.size())
			 {
			 	if(a[0]!=1){get_a=1;break;}
			 	if(i>0 and a[i-1]+1!=a[i]){get_a=1;break;}
			 }


			 fr(first,n)
			 {
			 	b.pb(s[i]);
			 }
			 sort(b.begin(),b.end());
//			 fr(0,b.size())cout<<b[i]<<" ";
//			 cout<<e;
			 int get_b=0;
			 if(!get_a)
			 fr(0,b.size())
			 {
			 	if(b[0]!=1){get_b=1;break;}
			 	if(i>0 and b[i-1]+1!=b[i]){get_b=1;break;}
			 }
			 //cout<<get_b<<e;
			 if(!get_a and !get_b)times++;




			 ve aa,bb;
			 fr(0,sec)
			 {
			 	aa.pb(s[i]);
			 }
			 sort(aa.begin(),aa.end());
//			 fr(0,aa.size())cout<<aa[i]<<" ";
//			 cout<<e;
			 int get_aa=0,time=0;
			 fr(0,aa.size())
			 {
			 	if(aa[0]!=1){get_aa=1;break;}
			 	if(i>0 and aa[i-1]+1!=aa[i]){get_aa=1;break;}
			 }

			 fr(sec,n)
			 {
			 	bb.pb(s[i]);
			 }
			 sort(bb.begin(),bb.end());
//			 fr(0,bb.size())cout<<bb[i]<<" ";
//			 cout<<e;
			 int get_bb=0;
			 if(!get_aa)
			 fr(0,bb.size())
			 {
			 	if(bb[0]!=1){get_bb=1;break;}
			 	if(i>0 and bb[i-1]+1!=bb[i]){get_bb=1;break;}
			 }



			 if(!get_bb and !get_aa)time++;
			 cout<<times+time<<e;
			 if(!get_a and !get_b)cout<<first<<" "<<sec<<e;
			 if(!get_aa and !get_bb)cout<<sec<<" "<<first<<e;

			 //cout<<e;
		}
		else cout<<0<<e;


	}
}


