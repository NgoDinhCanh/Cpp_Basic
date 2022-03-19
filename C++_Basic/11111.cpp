#include <bits/stdc++.h>
using namespace std;

bool sohoanhao( long long n)
{
	long long sum = 1;
	for(int i=2 ; i <= sqrt(n);i++ ){
		if(n%i==0) sum +=i;
		if(i != n/i) sum += n/i;
	}
	if(sum==n) return true;
	else return false;
}
int main(){
    long long n ; cin>>n;
    if(sohoanhao(n)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
