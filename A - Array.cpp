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
    ll n,p;
    cin>>n>>p;
    lll a[n];
    fr(i,0,n-1)
    {
        cin>>a[i];
    }
    ll q;
    cin>>q;

    while(q--)
    {

       ll t,l,r,k;
       cin>>t>>l>>r>>k;
       l--,r--;

       if(t==1){fr(i,l,r)
       {
           a[i]=a[i]+k;
       }}

       if(t==2){fr(i,l,r)
       {
           a[i]=a[i]*k;
       }}


      if(t==3) {fr(i,l,r)
       {
           a[i]=pow(a[i],k);
           cout<<a[i]<<E;
       }}


      lll sum=0;
       if(t==4) {fr(i,l,r)
       {
           lll l=pow(a[i],k);
           sum=(sum+l);
        }
         cout<<sum%p<<E;
       }

    //}
       lll pro=1;

       if(t==5){
        fr(i,l,r)
       {
           pro=(pro*a[i]);
       }
       cout<<pro%p<<E;
       }

       //cout<<sum<<" "<<pro<<E;

    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

        solve();
}


