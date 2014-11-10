#include <iostream>
#include <map>

using namespace std;
int main(int argc, char *argv[]) {
	int t;
	cin >> t;
	map <int, long long int> check;
	while(t--)
	{
		long long int n;
		cin >> n;
		auto search = check.find(n);
		if (search != check.end() )
		{
			cout << search->second << endl;
		}
		else {
			long long int i, j;
			long long int temp;
			long long int max = -1;
			for (i=1;i<n/2;i++)
			{
				for (j=i+1;j<n/2;j++)
				{
					temp = n-i-j;		
					if (i*i+j*j-temp*temp == 0)
					{
						if ((i*j*temp)>max)
							max = i*j*temp;
					}
				}
			}
			cout << max << endl;
			check[n]=max;
		}
	}
	
}