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
#define pri1(qxt) cout<<qxt<<"\n";
#define pri2(qxt1,qxt2) cout<<qxt1<<" "<<qxt2<<"\n";
#define pri3(qxt1,qxt2,qxt3) cout<<qxt1<<" "<<qxt2<<" "<<qxt3<<"\n";
#define pri4(qxt1,qxt2,qxt3,qxt4) cout<<qxt1<<" "<<qxt2<<" "<<qxt3<<" "<<qxt4<<"\n";
typedef vector <int> ve;
typedef vector <bool> vb;
int cse=0;
void priarr(int qxt[],int to)
{
    for(int i=0;i<=to;i++)cout<<qxt[i]<<" ";
    pri1("\n");
}

void solve()
{
    int i,j;
    cin>>i>>j;
    int ans=0;
   // int a,b,c,d,e,f,g,h,i,j;
//cout<<ans<<E;
    if(i-1>=1 and j-2>=1)ans++;
    if(i-2>=1 and j-1>=1)ans++;
//cout<<ans<<E;
    if(i-2>0 and j+1<9)ans++;
    if(i-1>0 and j+2<9)ans++;
//cout<<ans<<E;
    if(i+1<9 and j+2<9)ans++;
    if(i+2<9 and j+1<9)ans++;
//cout<<ans<<E;
    if(i+2<9 and j-1>0 )ans++;
    if(i+1<9 and j-2>0)ans++;
  // cout<<ans<<E;
   printf("Case %d: ",++cse);
    //printf("Case %d: ",++cse);
    cout<<ans<<E;
}

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
        solve();
}



