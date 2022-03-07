#include<bits/stdc++.h>

using namespace std;
int main(){
	int n,m,a;
	cin >> n >> m >> a;
	int a1 = n/a;
	int a2 = m/a;
	if(n%a==0 && m%a==0) cout << a1 + a2;
	else cout << a1 + 1 + a2 +1 ;
	return 0;
}
