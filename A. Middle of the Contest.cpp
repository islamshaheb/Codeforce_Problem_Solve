#include<bits/stdc++.h>
using namespace std;
#define fr(frm,forn)for(int i=frm; i<forn; i++)
#define rfr(frm,forn)for(int ii=frm; ii>=forn; ii--)
#define fr1(fork,forl)for(int j=fork; j<forl; j++)
#define fr2(frm,forn)for(int k=frm; k<forn; k++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		int a,b,c,d;
		scanf("%d:%d",&a,&b);
		scanf("%d:%d",&c,&d);
		int m,hm;
		if(d<b){
				d+=60;
		        m=abs(d-b);
		        hm=c-(a+1);
		        hm*=60;

		}
		else
			{   m=abs(d-b);
				hm=abs(a-c);
				hm*=60;

			}


        int sum=hm+m;
		//cout<<sum<<e;
		int mid=sum/2;
		int minn=mid%60;
		int hr=mid/60;
		//cout<<hr<<" "<<minn<<e;
		int ahr=a+hr;
		int am=b+minn;
		if(am>59)
		{
			ahr+=(am/60);
			am=am%60;

		}

		if(ahr<10 and am<10)
			cout<<"0"<<ahr<<":"<<"0"<<am<<e;
		else if(ahr<10 and am>=10)
			cout<<"0"<<ahr<<":"<<am<<e;
		else if(ahr>=10 and am<10)
			cout<<ahr<<":"<<"0"<<am<<e;
		else
			cout<<ahr<<":"<<am<<e;
	}
}

