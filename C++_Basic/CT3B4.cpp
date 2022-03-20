#include <bits/stdc++.h>
using namespace std;


int c[10000001];

void sieve(){
	for(int i = 0 ; i<=1e7 ;i++)
	{
		c[i] = 1;
	}
	c[0] = c[1] = 0;
	for(int i=2;i<=sqrt(1e7);i++)
	{
		if(c[i]==1){
			for(long long j =i*i;j<=1e7;j +=i)
			{
				c[j] = 0;
			}
		}
	}
}
bool digitcheck(int n){
	while(n){
	int a = n%10;
	if(a!=2 && a!=3 && a!=5 && a!=7) return false;
	n/=10;
	}
	return true;
}
int main(){
    long long a,b ; cin>>a>>b;
    sieve();
    int cnt = 0;
    for(long long i =a ;i<=b;i++)
    {
    	if(digitcheck(i) && c[i] ==1) ++cnt;
	}
	cout<<cnt;
    return 0;
}
