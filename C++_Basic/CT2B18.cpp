#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin>>n;
	long long count =0 ;
	while(n!=0)
	{
		int s = n%10;
		if(s==2||s==3 || s==5 ||s==7) ++count;
		n/=10;
	}
	cout<<count;
	
}
