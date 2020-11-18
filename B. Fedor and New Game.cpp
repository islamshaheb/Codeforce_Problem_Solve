#include<bits/stdc++.h>
using namespace std;

#define ll long long int
main()
{
   // freopen("input.txt","r",stdin);
    ll n,m,k;
    cin>>n>>m>>k;

    vector <int > last;
    vector <int > tlast;

    int a[m+2];
    for(int i=0; i<=m; i++)
        cin>>a[i];

    int l=a[m];

    while(l>0)
    {
        if(l%2==0)
            last.push_back(0);
        else
            last.push_back(1);
         l/=2;

    }

    int le=last.size();

    for(int j=le-1; j>=0; j--)
    {
        tlast.push_back(last[j]);
    }

	int rem=n-le;

	for(int i=0; i<rem; i++)
		tlast.insert(tlast.begin(),0);

    int answer=0;

     for(int i=0; i<m; i++)
     {
         int temp=a[i];
         vector <int > t;
         int tk=k;
         while(temp>0)
         {
            if(temp%2==0)
                t.push_back(0);
            else
                t.push_back(1);
            temp/=2;

         }

         int tl=t.size();
         vector <int> templ;
         for(int j=tl-1; j>=0; j--)
         {
            templ.push_back(t[j]);
         }

         int rem=n-tl;
         for(int i=0; i<rem; i++)
			templ.insert(templ.begin(),0);

          tk=0;

		  for(int j=0; j<n; j++)
             {

				if(tlast[j]!=templ[j])
				 {

				 	tk++;
				 }

             }

		  if(tk<=k)
			answer++;
     }
     cout<<answer<<endl;

}
