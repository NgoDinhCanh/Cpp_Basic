#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	long sum = 0;
	for(int i=3;i<=n;i+=3)
		{	
		 sum +=i;
		}
	cout << sum;
}
