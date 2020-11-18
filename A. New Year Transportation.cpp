#include<bits/stdc++.h>
#define ll  long long int
#define c cout
#define e endl

using namespace std;
vector <int> vec[300000];
vector <bool> vis;

void DFS(int start)
{

    for(auto i=vec[start].begin(); i!=vec[start].end(); i++)
    {
        if(!vis[*i])
        {
            int y=*i;
            vis[y]=true;
            DFS(y);
        }

    }

}


using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    ll n,t;
    cin>>n>>t;
    vis.assign(n,false);
    int a[n+5];

    for(int i=1; i<n; i++)
    {
        ll x;
        cin>>x;
        x=x+i;
        a[i]=x;
        vec[i].push_back(a[i]);
    }


    DFS(1);

    if(vis[t])
        cout<<"YES\n";
    else
        cout<<"NO\n";

    for(int i=0; i<=n; i++)vec[i].clear();
    return 0;
}
