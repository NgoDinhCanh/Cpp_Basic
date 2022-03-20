#include <bits/stdc++.h>
using namespace std;


int a[10000001];

void sieve(){
	for(int i = 0 ; i<=1e7 ;i++)
	{
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for(int i=2;i<=sqrt(1e7);i++)
	{
		if(a[i]==1){
			for(int j =i*i;j<=1e7;j +=i)
			{
				a[j] = 0;
			}
		}
	}
}
int main(){
	sieve();
    int t ;cin>>t;
    while(t--){
		int n ; cin>>n;
		for(int i=2 ;i <=n/2;i++)
		{
			if(a[i] ==1 && a[n-1]==1) cout << i  << " " << n-i<< endl;		
		}
	}
    return 0;
}
