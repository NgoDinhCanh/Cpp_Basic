#include <bits/stdc++.h>
using namespace std;

int main(){
	long long c1,c2,c3,c4,c5;
	cin >> c1>>c2>>c3>>c4>>c5;
	long long sum = c1+c2+c3+c4+c5;
	long long t = (c1+c2+c3+c4+c5)/5;
	if(sum%5==0) cout << t;
	else cout<<-1; 
	return 0;
}
