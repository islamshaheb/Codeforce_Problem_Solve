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
void priarr(int qxt[],int to)
{
    for(int i=0;i<=to;i++)cout<<qxt[i]<<" ";
    pri1("\n");
}

void solve()
{
    int n,q,k;
    cin>>n>>q>>k;
    int a[n+1];
    frr(1,n)cin>>a[i];
    while(q--)
    {

        int x,y;
        cin>>x>>y;
        ve vec;
        frr(x,y)
        {
            vec.pb(a[i]);
        }
        vec.pb(k);
        int ans= 0;
        frr(x+1,y)
        {
            if(i==y or i==x+1)
            {
                if(i==x+1)
                {
                    int temp = a[i]-1;
                    ans+=temp-1;
                }
                else
                {
                    int tem = a[i]-a[i-2];
                    ans+=tem-2;

                    int temp = k-a[i-1];
                    ans+=temp-1;
                    //cout<<temp<<"gone\n";
                }

            }
            else
            {
                int tem = a[i]-a[i-2];
                ans+=tem-2;
               // cout<<tem<<"+";

            }
        }

//        frr(0,vec.size()-1)cout<<vec[i]<<"_";
//        cout<<E;

        if(x==y)ans++;
        cout<<ans<<E;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    //cin>>tc;
    //while(tc--)
        solve();
}


