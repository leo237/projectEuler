#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
vector<long long int> factors;
void primeFactors(long long int n)
{
    // Print the number of 2s that divide n
    
	while (n%2 == 0)
    {
        factors.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
			 factors.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
		 factors.push_back(n);
}

int main(int argc, char *argv[]) 
{
		//ooint isPrime(int);
		int t, i;
		cin>>t;
		while(t--)
		{
			factors.clear();
			long long int n;
			cin>>n;
			long long int n2 = n;
			primeFactors(n);
			
			sort(factors.begin(),factors.end() );
			int len = factors.size();
			for (i=0;i<len;i++)
				cout << factors[i] << " ";
			cout << endl << factors[len-1] << endl;
		
		}
}
