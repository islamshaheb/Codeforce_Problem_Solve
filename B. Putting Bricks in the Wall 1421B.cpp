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
    //cout<<"__"<<n<<E;
    char a[n][n];
    fr(i,0,n-1)
    {
        fr(j,0,n-1)
        {
            cin>>a[i][j];
           // cout<<a[i][j]<<" ";
        }
        //cout<<E;
    }
   // cout<<E;
    int one=0,zero=0,oone=0,ozero=0;

    if(a[0][1]=='0')zero=1;
    if(a[0][1]=='1')one=1;
    if(a[1][0]=='1')one=1;
    if(a[1][0]=='0')zero=1;

    if(a[n-1][n-2]=='0')ozero=1;
    if(a[n-1][n-2]=='1')oone=1;
    if(a[n-2][n-1]=='1')oone=1;
    if(a[n-2][n-1]=='0')ozero=1;

    if(!one or !zero)
    {
        if(!one)
        {
            int x=0;
            // all zero
            ve vec;
            if(a[n-1][n-2]=='0')
            {
                vec.pb(n-1);
                vec.pb(n-2);
                x++;
            }
            if(a[n-2][n-1]=='0')
            {
                vec.pb(n-2);
                vec.pb(n-1);
                x++;
            }

            cout<<x<<E;
            if(x==1)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
            }
            else if(x==2)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
                cout<<vec[2]+1<<" "<<vec[3]+1<<E;
            }
        }
        else
        {

            int x=0;
            // all one
            ve vec;
            if(a[n-1][n-2]=='1')
            {
                vec.pb(n-1);
                vec.pb(n-2);
                x++;
            }
            if(a[n-2][n-1]=='1')
            {
                vec.pb(n-2);
                vec.pb(n-1);
                x++;
            }

            cout<<x<<E;
            if(x==1)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
            }
            else if(x==2)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
                cout<<vec[2]+1<<" "<<vec[3]+1<<E;
            }

        }
        return;
    }

   if(!oone or !ozero)
    {
        if(!oone)
        {
            int x=0;
            // all zero
            ve vec;
            if(a[0][1]=='0')
            {
                vec.pb(0);
                vec.pb(1);
                x++;
            }
            if(a[1][0]=='0')
            {
                vec.pb(1);
                vec.pb(0);
                x++;
            }

            cout<<x<<E;
            if(x==1)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
            }
            else if(x==2)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
                cout<<vec[2]+1<<" "<<vec[3]+1<<E;
            }
        }
        else
        {

            int x=0;
            // all one
            ve vec;
            if(a[0][1]=='1')
            {
                vec.pb(0);
                vec.pb(1);
                x++;
            }
            if(a[1][0]=='1')
            {
                vec.pb(1);
                vec.pb(0);
                x++;
            }

            cout<<x<<E;
            if(x==1)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
            }
            else if(x==2)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
                cout<<vec[2]+1<<" "<<vec[3]+1<<E;
            }

        }
        return;
    }

            int x=0;
            ve vec;
            if(a[0][1]=='0')
            {
                vec.pb(0);
                vec.pb(1);
                x++;
            }
            if(a[1][0]=='0')
            {
                vec.pb(1);
                vec.pb(0);
                x++;
            }



            if(a[n-1][n-2]=='1')
            {
                vec.pb(n-1);
                vec.pb(n-2);
                x++;
            }
            if(a[n-2][n-1]=='1')
            {
                vec.pb(n-2);
                vec.pb(n-1);
                x++;
            }

            cout<<x<<E;
            if(x==1)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
            }
            else if(x==2)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<E;
                cout<<vec[2]+1<<" "<<vec[3]+1<<E;
            }
            return;

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


