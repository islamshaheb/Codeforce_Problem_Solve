#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<=fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<=fornn; iii++)
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
int x[1000001];
void solve()
{
    x[1]=1;
	fr(i,1,100001)
	{
		if(!x[i])
			for(int j=2;j*i<=100001; j++)
			{
				x[i*j]++;
			}
	}
	int n,summ=0,sum1=0;
	cin>>n;
	fr(i,1,n-1)
	{
	    int sum=0;
	    fr(j,1,n-1)sum++,cout<<1<<" ";
	    int anss;
	    fr(j,1,100000)
        {
            int temp=sum+j;
            if(!x[temp] and x[j])
            {
                anss=j;
                break;
            }
        }
        summ++;
        cout<<anss<<E;
	    sum1+=anss;
	}

	int ans,ans1;
	fr(i,1,100000)
	{
	    int temp=summ+i;
	    if(!x[temp] and x[i])
        {
            ans=i;
            break;
        }
	}
	fr(i,1,100000)
	{
	    int temp=sum1+i;
	    if(!x[temp] and x[i])
        {
            ans1=i;
            break;
        }
	}

	fr(i,1,n-1)cout<<ans<<" ";
	cout<<ans1<<E;

}

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    cin>>tc;
    while(tc--)
        solve();
}


