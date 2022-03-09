#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k2,k3,k5,k6;
	cin >> k2>>k3>>k5>>k6;
	long long min256 = min(k2,min(k5,k6));
	long long count256 = min256*256;
	if(min256 == k2) cout<<count256;
	else {
	long long min32= min(k3,k2-min256);
	cout << min32*32+count256;
	}
   	return 0;
}
