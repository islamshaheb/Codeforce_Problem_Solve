#include<bits/stdc++.h>
using namespace std;

main()
{
	int n,l;
	cin>>n>>l;
	double a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	sort(a,a+n);

	vector <double> vec;
	vec.push_back(a[0]-0);
	for(int i=1; i<n; i++)
	{
		double temp=a[i]-a[i-1];
		vec.push_back(temp/2);//cout<<temp/2.0<<endl;
	}
	vec.push_back(l-a[n-1]);
	double mx=*max_element(vec.begin(),vec.end());
	printf("%.15f\n",mx);



}
