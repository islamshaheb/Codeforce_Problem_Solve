#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

vector <int> vec[1001];
vector <bool> vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
	    string s;
	    cin>>s;
	    bool one=0,zero=0;
	    int len=s.length();
	    fr(0,len)
	    {
	        if(s[i]=='1')one=1;
	        if(s[i]=='0')zero=1;
	    }

	    if(one and zero)
        {
            fr(0,2*len)
                if(i%2==0)cout<<"1";
                else cout<<"0";
            cout<<endl;
        }
        else
        {
            cout<<s<<endl;
        }

	}
}


