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
   int x,a,b;
   cin>>x>>a>>b;

   fr(i,1,51)
   {
       int test=0;
       fr(j,1,51)
       {
           ve vec;
           int t=0,tt=0,sum=j,times=0;
           fr(k,j,100000)
           {
               vec.pb(sum);
               if(sum==a)t=1;
               if(sum==b)tt=1;
               sum+=i;
               times++;
               if(times>=x)break;
           }
           if(tt and t)
           {
               test=1;
               fr(k,0,x)
               {
                   cout<<vec[k]<<" ";
               }
               cout<<E;
           }
           if(test)break;
       }
        if(test)break;
   }
}

int main()
{
   freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    cin>>tc;
    while(tc--)
        solve();
}

