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
    int a[n];
    frr(0,n-1)cin>>a[i];
    int no_answer=1;
    frr(1,n-1){
        if(a[i-1]!=a[i])no_answer=0;
        if(!no_answer)break;
    }

    if(no_answer)cout<<-1<<E;
    else
    {
        int best=-34,index=0;
        fr(i,0,n-1)
        {
            if(a[i]>best and ((i>0 and a[i-1]<a[i]) or (i<n-1 and a[i]>a[i+1])))
            {
                best=a[i];
                index=i;
            }
        }
        cout<<index+1<<E;
    }

}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    cin>>tc;
    while(tc--)
        solve();
}


