#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<fornn; iii++)
#define rfr(iii,frm,fornn)for(int iii=frm; iii>=fornn; iii--)
#define itfr(iii,frm)for(auto iii=frm.begin(); iii!=frm.end(); iii++)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define clr2(seta,xxxx,yyyy) memset(seta,0,sizeof(int)*xxxx*yyyy)
#define seet2(seta,xxxx,yyyy) memset(seta,-1,sizeof(int)*xxxx*yyyy)
#define E "\n"
#define infi 10000000000000
#define F first
#define S second
typedef vector <int> ve;
typedef vector <bool> vb;

void solve()
{
	string s;
	ve vec;
	cin>>s;
	int x=0;
	s+='0';
	frr(0,s.length())
	{
		
		if(s[i]=='0')
		{
			if(x>0)vec.pb(x);
			x=0;
		}
		else x++;
	}
	
	sort(vec.begin(),vec.end(), greater<int>());
	int answer=0;
	frr(0,vec.size())
	{
		answer+=vec[i];
		i++;
	}
	cout<<answer<<E;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
		solve();
}


