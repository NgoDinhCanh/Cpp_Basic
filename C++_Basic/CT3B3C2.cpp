#include <bits/stdc++.h>
using namespace std;


int a[1000001];

void sieve(){
	for(int i = 0 ; i<=1e6 ;i++)
	{
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for(int i=2;i<=sqrt(1e6);i++)
	{
		if(a[i]==1){
			for(int j =i*i;j<=1e6;j +=i)
			{
				a[j] = 0;
			}
		}
	}
}
int main(){
	int t ; cin >>t;
	while(t--){
	int n ; cin >> n;
	if(a[n]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
    }
    return 0;
}
