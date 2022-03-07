#include <bits/stdc++.h>
using namespace std;

int main(){
	int n , m , a ;
	cin >> n >> m >> a;
	int res , res1 ;
	if(n%a !=0) res = n/a+1;
	else res = a/n;
	if(m%a !=0) res1 = m/a+1;
	else res1 = m/a;
	
	cout << (long long)res*res1;
}
