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

int fun(string a,string b,int n)
{
    int times = 0,len = b.length();
    fr(i,0,a.length()-len)
    {
        string sbst=a.substr(i,len);
        if(sbst.compare(b)==0)times++;
        if(times>=n)return times;
    }
    return times;
}
void solve()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int n;
    cin>>n;
    bool ans = 0,mx=-34343;
    string an;
    string t="";
    t+=b[0];
   //cout<<b[0]<<E;
    int x = fun(a,t,n);
    if(x==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    rfr(i,b.length(),1)
    {

        string sb= b.substr(0,i);
        int x = fun(a,sb,n);
        if(x>=n)
        {
            if(sb.length()>=mx)
            {
                an=sb;
                cout<<an<<E;
                return;
                mx=sb.length();
            }
            ans=1;
        }
    }
    if(ans)
    {
        cout<<an<<E;
        return;
    }
    cout<<"IMPOSSIBLE"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    //cin>>tc;
    //while(tc--)
        solve();
}


