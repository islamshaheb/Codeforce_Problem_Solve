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
void priarr(double qxt[],int to)
{
    for(int i=0;i<=to;i++)cout<<qxt[i]<<" ";
    pri1("\n");
}

void solve()
{
    int n;
    double k;
    cin>>n>>k;
    double a[n];
    double sum[n];
    fr(i,0,n-1)
    {
        int x;
        cin>>x;
        a[i]=x;
        if(i==0)
        {
            sum[i]=x;
        }
        else
        {
            sum[i]=sum[i-1]+x;
        }
    }

    rfr(i,n-2,0)
    {
        double d = a[i+1]/sum[i];
        //cout<<a[i+1]<<" "<<sum[i]<<" "<<d<<E;
        int temp = 0;
        cout<<i<<"---------------------"<<double(k/100)<<" "<<d<<"**\n";
        if(d>(k/100))
        {
            temp++;
            d = a[i+1]/(sum[i]+temp);
            cout<<i<<" "<<temp<<" "<<d<<" \n";

        }
        a[i]=a[i]+temp;

    }
    priarr(a,n-1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    cin>>tc;
    while(tc--)
        solve();
}



