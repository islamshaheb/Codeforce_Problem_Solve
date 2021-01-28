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
    int n;
    cin>>n;
    if(n==1)cout<<6<<E;
    else{
        if(n%2)
        {
            int f=n+2;
            int s= n*2+3;
            if(f%5==0)
            {
                if(f%2==0)
                {
                    f+=1;
                }
                else f+=2;
                if(s%2==0)
                {
                    s+=1;
                }
                else s+=2;
            }

            if(s%5==0)
            {
                if(s%2==0)
                {
                    s+=1;
                }
                else s+=2;
            }


           cout<<f*s<<E;
        }
        else
        {
            int f=n+1;
            int s = n*2+1;
            if(f%5==0)
            {
                if(f%2==0)
                {
                    f+=1;
                }
                else f+=2;
                if(s%2==0)
                {
                    s+=1;
                }
                else s+=2;
            }

            if(s%5==0)
            {
                if(s%2==0)
                {
                    s+=1;
                }
                else s+=2;
            }


           cout<<f*s<<E;


        }//cout<<(1+n)*(n+1+n)<<E;
    }
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



