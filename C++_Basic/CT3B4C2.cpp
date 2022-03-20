#include <bits/stdc++.h>
using namespace std;

bool check(int n ){
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1;
}
bool digitcheck(int n){
	while(n){
	int a = n%10;
	if(a!=2 && a!=3 && a!=5 && a!=7) return 0;
	n/=10;
	}
	return 1;
}
int main(){
    long long a,b ; cin>>a>>b;
    int cnt = 0;
    for(long long i =a ;i<=b;i++)
    {
    	if(digitcheck(i) && check(i)) ++cnt;
	}
	cout<<cnt;
    return 0;
}
