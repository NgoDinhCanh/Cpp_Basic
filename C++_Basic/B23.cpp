#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n , m;
	cin>> n >> m;
	if(m>n) cout << "-1";
	else{
		if(n%2==0) cout << (n/2 + m -1)/m*m;
		else {
			n +=1;
			cout << (n/2+m-1)/m*m;
		}
	}
}
