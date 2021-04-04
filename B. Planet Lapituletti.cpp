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


int firstok(int fa,int h)
{

    cout<<" Come "<<fa<<E;
    while(1)
    {
        int temp = fa,chk=0;
        while(temp>0)
        {

            int rem = temp%10;
            if(rem==3 or rem==4 or rem==6 or rem==7 or rem==9)
            {
                cout<<"__ "<<temp<<E;
                chk=1;
                fa++;
                if(fa>=h)fa=0;
                break;
            }
            temp/=10;
        }
        if(!chk)
        {
            cout<<" Returning "<<fa<<E;
            return fa;
        }
    }
}

void solve()
{
    int h,m;
    cin>>h>>m;
    string s;
    cin>>s;
    int len=s.length();
    string ss="";
    //rfr(i,len-1,0)ss+=s[i];
    ss=s;
    int test=1,first=0,sec=0,act=0;
    fr(i,0,len-1)
    {
        if(ss[i]==':')
        {
            act=1;
            continue;
        }

        if(act)sec=sec*10+ss[i]-'0';
        else first=first*10+ss[i]-'0';

    }


    int fb=firstok(sec,h);
    if(fb<sec)first++;
    if(first>=h)first=0;

    int fa=firstok(first,m);
    cout<<first<<" "<<sec<<E;
    cout<<"____________Answer ";
    cout<<first<<":"<<fb<<endl;


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



