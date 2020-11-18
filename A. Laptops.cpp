#include<bits/stdc++.h>
using namespace std;
//#define mna 1e10
//#define mxa 1e-10

main()
{
	int n;
	cin>>n;
	int a,b;

	for(int i=0; i<n; i++)
	{
		cin>>a>>b;
		if(a!=b)
		{
			cout<<"Happy Alex\n";
			return 0;
		}

	}
//	int mna=100000,ina,mxb=-999999,inb;

//	for(int i=0; i<n; i++)
//	{
//		if(a[i]<mna)
//		{
//			mna=a[i];
//			ina=i;
//		}
//		if(b[i]>mxb)
//		{
//			mxb=b[i];
//			inb=i;
//		}
//	}


		cout<<"Poor Alex\n";

}
