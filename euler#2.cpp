#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int x,n1=1,n2=2,temp,t,sum;
    cin>>t;
    while(t--)
    {
        cin>>x;
        n1=1;
        n2=2;
        sum=0;
        while(n1<=x)
        {
            //cout<<n1<<" ";

            if(n1%2==0)
            {
                sum+=n1;
            }
            temp=n1+n2;
            n1=n2;
            n2=temp;
        }
        cout<<sum<<endl;
    }
    return 0;
    }