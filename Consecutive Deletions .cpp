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
    int n,k;
    cin>>n>>k;
    int a[n];
    fr(i,0,n-1)cin>>a[i];


    int mn=INT_MAX,first = 0 ,sum=0;
    while(1)
    {
        bool got=0;
        mn=INT_MAX;
        fr(i,0,n-k)
        {

//            fr(j,0,n-1)cout<<a[j]<<" ";
//            cout<<endl;


            int cur = 0;
            fr(j,i,i+k-1)
            {
                if(a[j])got=1,cur++;
            }

            if(cur<=0)continue;
            if(cur<mn)
            {
                first = i;
                mn=cur;
            }
        }
    //    cout<<"first +++++++++++++++ "<<first<<endl;
        if(!got)break;
        int x = 0;
        fr(i,first,first+k-1)
        {
            if(a[i])sum+=1;
            if(!x)
            {
                if(a[i])
                {
                    a[i]=0;
                    x=1;
                }

            }

        }
    }

 //   cout<<"Answer \n";
    cout<<sum<<endl;
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



