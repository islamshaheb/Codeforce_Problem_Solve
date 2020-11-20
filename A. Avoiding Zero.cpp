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
    int n;
    cin>>n;
    int a[n],pls=0,mns=0,sum=0,t=0;
    ve pluss,minuss;
    frr(0,n)
    {
        int x;
        cin>>x;
        sum+=x;
        a[i]=x;
        if(x>=0)pls+=x,pluss.pb(x);
        else mns+=abs(x),minuss.pb(x);
    }

    if(sum==0)cout<<"NO\n";
    else
    {
        if(pls>mns)
        {
            cout<<"YES"<<E;
            sort(pluss.begin(),pluss.end(),greater<int>());
            //sort(a.begin(), a.end(), greater<int>());
            frr(0,pluss.size())cout<<pluss[i]<<" ";
            frr(0,minuss.size())cout<<minuss[i]<<" ";
            cout<<E;
        }
        else
        {
            cout<<"YES"<<E;
            frr(0,minuss.size())cout<<minuss[i]<<" ";
            frr(0,pluss.size())cout<<pluss[i]<<" ";
            cout<<E;

        }


    }
}

int main()
{
  // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    cin>>tc;
    while(tc--)
        solve();
}


