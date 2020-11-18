#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<fornn; iii++)
#define rfr(iii,frm,fornn)for(int iii=frm; iii>=fornn; iii--)
#define itfr(iii,frm)for(int iii=frm.begin(); iii!=frm.end(); iii++)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define E "\n"
#define infi 10000000000000
#define F first
#define S second
typedef vector <int> ve;
typedef vector <bool> vb;

void solve()
{
	ll n;
	cin>>n;
	ll a,b,c;
	a=2*5,b=2*7,c=2*3;
	ll sum=a+b+c;
	if(sum>n)
	{
		cout<<"NO"<<E;
	}
	else 
	{
		ll rem=n-sum;
		if(rem==0)
		{
			a=3*5,b=2*5,c=2*3;
			ll sum1=a+b+c;
			if(sum1>n)
			{
				cout<<"NO"<<E;
			}else
			{
				cout<<"YES"<<E<<a<<" "<<b<<" "<<c<<" "<<n-sum1<<E;
			}	
			return;
		}
		if(a==rem)
		{
			a=3*5,b=2*5,c=2*3;
			ll sum1=a+b+c;
			if(sum1>n)
			{
				cout<<"NO"<<E;
			}else
			{
			cout<<"YES"<<E<<a<<" "<<b<<" "<<c<<" "<<n-sum1<<E;
			}
		
				
		}
		else if(b==rem)
		{
			a=2*5,b=3*5,c=2*3;
			ll sum1=a+b+c;
			if(sum1>n)
			{
				cout<<"NO"<<E;
			}else
			{
				cout<<"YES"<<E<<a<<" "<<b<<" "<<c<<" "<<n-sum1<<E;
			}
		}
		else if(c==rem)
		{
			a=2*5,b=2*3,c=3*5;
			ll sum1=a+b+c;
			if(sum1>n)
			{
				cout<<"NO"<<E;
			}
			else
			{
				cout<<"YES"<<E<<a<<" "<<b<<" "<<c<<" "<<n-sum1<<E;
			}
		}
		else
			{
				cout<<"YES"<<E<<a<<" "<<b<<" "<<c<<" "<<n-sum<<E;
			}
	}
	
}

int main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
		solve();
}
