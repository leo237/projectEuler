#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int testNumberOfDigits (int p)
{
	int counter = 1;
		
	while ((p = (p/10)))
		counter++;
	return counter;
}

int checkPalindrome(int x)
{
	int y = x;
	
	int check = 0;
	int remainder;
	
	while (x)
	{
		remainder = x%10;
		check = check*10 + remainder;
		x = x/10;	
	}
	if (y==check)
		return 1;
	else 
		return 0;
}

int multipleOf3(int x)
{
	int i = 100;
	for (i;i<999;i++)
	{
		if (x%i==0)
		{
			int test = x/i;
			int lol = testNumberOfDigits(test);
			if (lol == 3)
				return 1;
		}
	}
	return 0;
}


int main(int argc, char *argv[]) {
	int t;
	cin>>t;
	int ans = 0;
	while (t--)
	{
		
		long long int n;
		cin>>n;
		//n = 101101;
		
		//out << testNumberOfDigits(n);
		char *p;
		
		while (n--)
		{
			if (checkPalindrome(n))
			{
				ans = multipleOf3(n);
				if (ans == 1)
				{
					break;
				}
				else
				{
					ans = 0;
				}	
			}
		}
		
		if (ans == 1)
			cout << n << endl;	
			
		
		
	}
}