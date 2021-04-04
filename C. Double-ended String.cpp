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
    string a,b;
    cin>>a>>b;
    int l1=a.length(),l2=b.length();

    int mx=-2323;
    fr(l,0,l1-1)
    {
        fr(i,0,l1-1)
        {
            string sub = a.substr(l,i+1);
            fr(j,0,l2-sub.length())
            {
                if(sub.length()+j>l2)break;
                string sob=b.substr(j,sub.length());
               // cout<<" --- "<<sob<<E;
                if(sob.compare(sub)==0)
                {
                    int len = sob.length();
                    mx=max(mx,len);
                }

            }
        }
    }

//    fr(i,0,l1-1)
//    {
//        string sub = a.substr(0,l1-i);
//        cout<<sub<<E;
//        fr(j,0,l2-sub.length())
//        {
//            if(sub.length()+j>=l2)break;
//            string sob=b.substr(j,sub.length());
//            if(sob.compare(sub)==0)
//            {
//                int len = sob.length();
//                cout<<sob<<E;
//                mx=max(mx,len);
//            }
//
//        }
//    }

    if(mx<=0)
    {
        mx=0;
    }
    cout<<(l1+l2)-(mx*2)<<E;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    cin>>tc;
    while(tc--)
        solve();
}



