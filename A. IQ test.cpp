#include<bits/stdc++.h>
using namespace std;

main()
{
	//while(1)
	{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];


	bool evn=false;
	bool odd=false;
    int aa=0,b=1,c=2;
	if(a[aa]%2==1 and a[b]%2==1)
		{
			odd=true;//cout<<"odd"<<endl;
		}
	else if(a[aa]%2==0 and a[b]%2==0)
		{
			evn=true;//cout<<"__even"<<endl;
		}


	else if(a[b]%2==1 and a[c]%2==1)
		{
			odd=true;//cout<<"odd"<<endl;
		}
	else if(a[b]%2==0 and a[c]%2==0)
		{
			evn=true;//cout<<"even"<<endl;
		}

	else if(a[c]%2==1 and a[aa]%2==1)
		{
			odd=true;cout<<"odd"<<endl;
		}
	else if(a[c]%2==0 and a[aa]%2==0)
		{
			evn=true;//cout<<"even"<<endl;
		}



	for(int i=0;i<n;i++)
	{
		int x=a[i];
		if(odd)
		if(x%2==0)
		{
			cout<<i+1<<endl;
			break;
		}
		if(evn)
		if(x%2==1)
		{

			cout<<i+1<<endl;
			break;
		}
	}

	}
}
