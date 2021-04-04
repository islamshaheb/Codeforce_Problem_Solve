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

int maax = 200050;
void solve()
{
    vector<int >vec[maax];
    vector<int> value;
    ve vis;
    multimap<int,int> mp;

    int n,m;
    cin>>n>>m;
    vis.assign(maax,false);
    value.assign(maax,0);
    fr(i,1,m)
    {
        int x;
        cin>>x;
        mp.insert({x,i});
        fr(j,1,x)
        {
            int temp;
            cin>>temp;
            vec[i].pb(temp);
        }

    }



    map<int,int> answer;
    int cnt=1;
    for(auto x=mp.begin(); x!=mp.end(); x++)
    {
        int cur = x->second,got=0,temp;
        for(int i=0; i<vec[cur].size(); i++)
        {
            temp = vec[cur][i];
            int val = (m+1)/2;
            if(value[temp]<val)
            {
                value[temp]++;
                got = 1;
                answer.insert({cur,temp});
                cnt++;
                break;
            }

        }
        if(!got)
        {
            cout<<"NO\n";
            return;
        }
    }

      cout<<"YES\n";
      for(auto x=answer.begin(); x!=answer.end(); x++)
      {
          cout<<x->S<<" ";
      }
      cout<<endl;
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



