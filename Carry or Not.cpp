#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	//Thik hai sahi chal raha hai
	double a,b;
	int c;
	for (int i = 0; i < n * n * n; i += n * (n / 6)) {
		for (int j = i + n /5; j <= n / 3; j += i + i) {
			a += b + i + j;
		}
	}
	cin>>a>>b;
	c=a^b;
	cout<<c;
}
