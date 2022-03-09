#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,n;
	cin>>a>>b>>c>>n;
	long long sum = a+b+c+n;
	long long t = (a+b+c+n)/3;
	if(sum%3==0 && (t>=a&&t>=b&&t>=c)) cout << "YES";
	else cout << "NO" ;
   	return 0;
}
