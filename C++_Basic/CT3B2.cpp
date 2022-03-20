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
    long long n ; cin>>n;
    sieve();
    for(int i =1 ; i<=n;i++)
    {
    	if(a[i]==1) cout << i << " ";
	}
    return 0;
}
