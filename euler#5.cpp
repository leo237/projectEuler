#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b, a%b);
}

int lcm(int a, int b)
{
	int hcf = gcd(a,b);
	int prod = a*b;
	return (prod/hcf);
}


int main()
{
	int t,i;
	cin>>t;
	while (t--)
	{
		int n;
		cin >> n;
		int hcf = 1;
		long long int l = 1;
		int prod = 1;
		for (i=2;i<=n;i++)
		{
			l = lcm(l,i);
		}
		
		cout << l << endl;
	}
}