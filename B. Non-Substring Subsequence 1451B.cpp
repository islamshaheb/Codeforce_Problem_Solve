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
    int n,test;
    string s,tt;
    cin>>n>>test;
    cin>>s;
//    cout<<s<<E;
//    tt=s;
    while(test--)
    {
        int l,r;
        cin>>l>>r;
        string temp;
        fr(i,l-1,r-1)temp+=s[i];
        int pointer=0,con=0,cnt=0,get=0,last=0;
       // cout<<"_ "<<s<<" "<<temp<<" "<<l<<" "<<r<<E;

        fr(i,0,n-1)
        {
            int t=0;
            if(s[i]==temp[pointer])
            {
                t=1;
               // cout<<s[i]<<" "<<temp[pointer]<<E;
                pointer++;

                cnt++;
                if(cnt>=((r-l)+1))get=1,last=i;
            }
            if(cnt>=(r-l)+1)break;
            if(pointer>0 and t==0)con=1;


        }
        //cout<<con<<E;

        if(cnt>=((r-l)+1) and con==0)
            {

                int yes=0;
                fr(i,last,n-1)
                {

                    if(yes and s[i]==temp[temp.length()-1])
                    {
                        con=1;
                        break;
                    }
                    yes=1;
                }
            }

           if(con and get)cout<<"YES"<<E;
           else cout<<"NO"<<E;


    }
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


