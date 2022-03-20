#include <bits/stdc++.h>
using namespace std;
bool check(int n ){
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
    long long n ; cin >> n;
    for(int i=2; i<=sqrt(n);i++){
		if( check(i) && 1ll*i*i <=n){
			cout << 1ll*i*i<<" ";
		}
	}
    return 0;
}
