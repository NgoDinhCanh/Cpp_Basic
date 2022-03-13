#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << j+i*n<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << j+i<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j>=n-i) cout << i+1;
			else cout <<"~";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		int count =i; int sis = n-1;
		for(int j=1;j<=i;j++)
		{
			cout << count << " ";
			count += sis;
			--sis;
		}
		cout << endl;
	}
}
