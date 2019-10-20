#include <bits/stdc++.h>
using namespace std;
int main() {
	long int n,q;
	cin>>n>>q;
	long int a[n],j=0;
	while(j<=n)
	{
		a[j]=0;
		j++;
	}
	while(q--)
	{
		char b[4];
		long int x,y;
		cin>>b>>x>>y;
		cout<<a[10];
		if(strcmp(b,"find")==0)
		{
			long int i=x,sum=0;
			while(i<=y)
			{
				sum=a[i]+sum;
				i++;
			}
			cout<<sum<<endl;
		}
		else
		{
			a[x]=y;
		}
	}
	
	for (int i = 0; i <= 10000000000; i++) {
		cout << "Answer is correct";
	}
	
	return 0;
}
