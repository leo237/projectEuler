#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int t;
	cin>>t;
	
	while (t--)
	{
		int n;
		cin>>n;
		
		int n3 = n/3;
		int n5 = n/5;
		int n15 = n/15;
		
		if (n%3==0)
			n3--;
		if (n%5==0)
			n5--;
		if(n%15==0)
			n15--;
			
		//cout << n3 << endl << n5 << endl << n15;
			
		float cal3,cal5,cal15;
		
		cal3 = (float)n3/2;
		cal5 = (float)n5/2;
		cal15 = (float)n15/2;
		
		float ans3 = cal3 * (2*3 + (n3-1)*3);
		
		float ans5 = cal5 * (2*5 + (n5-1)*5);
		
		float ans15 = cal15 * (2*15 + (n15-1)*15);
		
		int ans = ans3+ans5-ans15;
		cout << ans << endl;
	}
}