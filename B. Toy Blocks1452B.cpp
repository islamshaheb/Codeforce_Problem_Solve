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

void solve()
{
    int n;
    cin>>n;
    ll a[n];
    frr(0,n-1)cin>>a[i];
    sort(a,a+n);
    ll sum=0,total=a[0];
    fr(i,1,n-1)
    {
        sum+=a[n-1]-a[i];
        total+=a[i];
    }
    if(sum-a[0]<0)
    {
        int rem=total%(n-1);
        if(rem==0)
        {
            cout<<rem<<E;
            return;
        }
        cout<<(n-1)-rem<<E;
        return;
    }
    cout<<sum-a[0]<<E;
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


