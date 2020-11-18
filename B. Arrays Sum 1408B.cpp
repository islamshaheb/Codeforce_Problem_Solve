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
   int n,k;
   cin>>n>>k;
  // cout<<n<<"__"<<k<<E;
   int a[n];
   frr(0,n)cin>>a[i];

   if(k==1)
   {
       int ans=1;
       frr(1,n)
       {
           if(a[i]!=a[0])
           {
               ans=0;
               break;
           }
       }

       if(!ans)
       {
           cout<<-1<<E;
           return;
       }
   }

   int x=0;
   while(1)
   {
       int test=1,termin=n,best=a[0],ch=0;
       frr(1,n)
       {
           best=a[i];
           if(a[i]!=a[i-1])
           {
               test++;
           }
           if(test>=k)
           {
               termin=i;
               break;
           }

       }

        fr(i,0,termin+1)
        {
            a[i]=0;
        }
        fr(i,termin+1,n)
        {
            //ch=1;
            a[i]=a[i]-best;
        }
         x++;
        frr(0,n){if(a[i]!=0)ch=1;}
        if(!ch)break;
        //frr(0,n)cout<<a[i]<<" ";cout<<E<<ch<<E;



   }
   cout<<x<<E;
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


