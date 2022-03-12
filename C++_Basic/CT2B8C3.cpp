#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	long sum = 0;
	int i =1 ;
	while(n--){
		if(i%3==0){
			sum +=i;
		}
		++i;
	}

	cout << sum;
}
