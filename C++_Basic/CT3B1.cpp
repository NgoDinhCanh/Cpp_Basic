#include <bits/stdc++.h>
using namespace std;


bool check (long long n){
	if(n<2) return false;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
    long long n ; cin>>n;
    if(check(n)) cout << "YES";
    else cout  << "NO";
    return 0;
}
