#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char *argv[]) {
	long long int t, i;
	cin >> t;
	while (t--)
	{
		long long int n ;
		cin >> n;
		long long int sumOfSquares = 0;
		long long int squareOfSum = 0;
		for (i=1;i<=n;i++)
			sumOfSquares += pow(i,2);
		squareOfSum = (n * (n+1))/2;
		squareOfSum = pow(squareOfSum,2);
		
		cout << abs(squareOfSum - sumOfSquares) << endl;
	}
}