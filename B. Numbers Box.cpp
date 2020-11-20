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
    int n,m;
    cin>>n>>m;
    int a[n][m],temp[n][m],co=34343;
    fr(i,0,n-1)
    {
        fr(j,0,m-1)
        {
            cin>>a[i][j];
            temp[i][j]=co;
        }
    }

    fr(i,0,n-1)
    {
        fr(j,0,m-1)
        {
            int mx[4];
            int con=3244;

            if(a[i][j]<0)
            {
                mx[0]=con,mx[1]=con,mx[2]=con,mx[3]=con;
                int ch=0;
                if(j>0)
                {
                    if(a[i][j-1]<=0)
                    {
                        temp[i][j]=abs(a[i][j]);
                        temp[i][j-1]=abs(a[i][j-1]);
                        ch=1;
                        //continue;
                    }
                    else mx[0]=a[i][j-1];
                }


                if(i>0)
                {
                    if(a[i-1][j]<=0)
                    {
                        temp[i][j]=abs(a[i][j]);
                        temp[i-1][j]=abs(a[i-1][j]);
                        //continue;
                        ch=1;
                    }
                     else mx[1]=a[i-1][j];
                }


                if(j<m-1)
                {
                    if(a[i][j+1]<=0)
                    {
                        temp[i][j]=abs(a[i][j]);
                        temp[i][j+1]=abs(a[i][j+1]);
                        //continue;
                        ch=1;
                    }
                    else mx[2]=a[i][j+1];
                }


                if(i<n-1)
                {
                    if(a[i+1][j]<=0)
                    {
                        temp[i][j]=abs(a[i][j]);
                        temp[i+1][j]=abs(a[i+1][j]);
                       // continue;
                       ch=1;
                    }
                     else mx[3]=a[i+1][j];
                }
                int index,low=45456;
                fr(k,0,3)
                {
                   // cout<<mx[k]<<" ";
                    if(mx[k]<low)
                    {
                        low=mx[k];
                        index=k;
                    }
                }

                if(ch)continue;
               // cout<<E<<i<<" "<<j<<"__"<<index<<" "<<ch<<E;
                if(index==0 and abs(a[i][j])>a[i][j-1])temp[i][j]=abs(a[i][j]),temp[i][j-1]=a[i][j-1]*(-1);
                else if(index==1 and abs(a[i][j])>a[i-1][j]) temp[i][j]=abs(a[i][j]),temp[i-1][j]=a[i-1][j]*(-1);
                else if(index==2 and abs(a[i][j])>a[i][j+1])temp[i][j]=abs(a[i][j]),temp[i][j+1]=a[i][j+1]*(-1);
                else if(index==3 and abs(a[i][j])>a[i+1][j])temp[i][j]=abs(a[i][j]),temp[i+1][j]=(-1)*a[i+1][j];
            }
        }
    }

    int sum=0;
    fr(i,0,n-1)
    {
        fr(j,0,m-1)
        {
           // cout<<a[i][j]<<" ";
            if(temp[i][j]<110)sum+=temp[i][j];
            else sum+=a[i][j];
        }
       // cout<<E;
    }
   // cout<<E;
    cout<<sum<<E;

}

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc,cse=0;
    cin>>tc;
    while(tc--)
        solve();
}


