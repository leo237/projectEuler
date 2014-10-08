#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int main(int argc, char *argv[]) {
	long long int isPrime(long long int);
	vector <long long int> prime;	
	prime.push_back(2);
	prime.push_back(3);
	prime.push_back(5);
	prime.push_back(7);
	prime.push_back(11);
	prime.push_back(13);
		
	int t;
	cin>>t;
	
	while (t--)
	{
		long int n;
		cin>>n;
		long long int i = prime[prime.size()-1] + 1;
		while (prime.size()<n)
		{
			for (;;i++)
			{
				if (isPrime(i))
				{
					prime.push_back(i);
					i+=2;
					break;
				}
			}	
		}
		cout << prime[n-1] << endl;
	}
	
}



long long int isPrime (long long int n)
{
	long long int i;
	int counter = 1;
	for (i=2;i<(sqrt(n)+1);i++)
	{
		if (n%i==0)
		{
			counter = 0;
			break;
		}
	}
	return counter;
}