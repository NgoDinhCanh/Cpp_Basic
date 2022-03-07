#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[]= {100,20,10,5,1};
	int n; cin >> n;
	int res =0;
	for(int i=0;i<5;i++){
		res += (n/a[i]);
		n %= a[i];
		}
		cout<<res;

}
