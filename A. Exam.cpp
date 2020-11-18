
#include<bits/stdc++.h>
using namespace std;

main()
{
  //  while(1)
    {
        int n;
        cin>>n;
        if(n==1)cout<<"1"<<endl<<1<<endl;
        else if(n==2)cout<<"1"<<endl<<2<<endl;
        else if(n==3)cout<<"2"<<endl<<"3 1"<<endl;
        else if(n==4)cout<<"4"<<endl<<"2 4 1 3"<<endl;
        else
        {
            cout<<n<<endl;

            int mid=n/2;
            if(n/2==1)
                mid++;

            int a[n],x=1;

            for(int i=0; i<n; i=i+2)
                    a[i]=x++;

            for(int i=1; i<n; i=i+2)
                    a[i]=x++;


            for(int i=0; i<n-1; i++)
                cout<<a[i]<<" ";
                cout<<a[n-1]<<endl;

        }


    }


}
