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
    int n,x=0,y=0,z=0;
    cin>>n;
    int a[n];
    fr(i,0,n-1)
    {
        cin>>a[i];
        int t = a[i]%3;
        if(!t)x++;
        else if(t==1)y++;
        else z++;
    }

    int mid = n/3;
    int ans = 0;

    //cout<<x<<" "<<y<<" "<<z<<E;
   //while(x!=y or y!=z or z!=x )
   {

       if(x<mid)
        {
            int t = mid-x;
            int te = z -mid;
            t = min(t,te);if(t>0)ans+=t,z-=t;

            if(x<mid)
            {
                te = y-mid;
                t = mid-x;
                t = min(t,te);if(t>0)ans+=t*2,y-=t;
            }

        }
        if(y<mid)
        {

            int te = x -mid;
            int t = mid-y;
            t = min(t,te);if(t>0)ans+=t,x-=t;

            if(y<mid)
            {
                te = z-mid;
                t = mid-y;
                t = min(t,te);if(t>0)ans+=t*2,z-=t;
            }

        }

        if(z<mid)
        {


            int te = y -mid;
            int t = mid-z;
            t = min(t,te);if(t>0)ans+=t,y-=t;

            if(z<mid)
            {
                te = x-mid;
                t = mid-z;
                t = min(t,te);if(t>0)ans+=t*2,x-=t;
            }

        }
   }
    cout<<ans<<E;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    cin>>tc;
    while(tc--)
        solve();
}



