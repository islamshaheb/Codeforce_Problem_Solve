#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(ll i=m; i<n; i++)
#define fr1(k,l)for(ll j=k; j<l; j++)
#define rfr(k,l)for(ll i=k; i>=0; i--)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define inf 1000000000000000000

bool connected=true;
vector <long long> path;

struct node{
    ll u,v;
    node(ll xu,ll xv)
    {
        u=xu,v=xv;
    }
 //   bool operator < ( const node& p ) const {      return v > p.v;   } //Operator overloading

};


void dijkstra(ll source,vector <ll>vec[],vector <ll>cost[],ll n,ll ans[])
{
    ll distance[n+1];
    distance[source]=0;
    fr(2,n+1)distance[i]=inf;

    priority_queue <node> q;
    q.push(node(source,0));

    while(!q.empty())
    {
        node top=q.top();
        ll u=top.u;
    //    cout<<u<<" ";
        fr(0,vec[u].size())
        {
            ll x=vec[u][i];
            if(distance[u]+cost[u][i]<distance[x])
            {
                q.push(node(x,distance[u]+cost[u][i]));
                distance[x]=distance[u]+cost[u][i];
                ans[x]=u;
            }

        }
        q.pop();
    }
    if(distance[n]==inf)connected=false;
}

void showpath(ll u,ll a[])
{
    path.pb(u);

    if(u==1)return;
    showpath(a[u],a);
}

main()
{
	//freopen("input.txt","r",stdin);
	ll tc,cse=0;
	vector <ll> vec[100011];
	vector <ll> cost[100011];

	ll node,edge;
	cin>>node>>edge;
	ll ans[node+10];
	fr(0,edge)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        vec[u].pb(v);
        vec[v].pb(u);
        cost[u].pb(w);
        cost[v].pb(w);
    }
    dijkstra(1,vec,cost,node,ans);
    if(connected)
    {
        showpath(node,ans);
        rfr(path.size()-1,0)cout<<path[i]<<" ";
    }
    else cout<<-1<<endl;


}

