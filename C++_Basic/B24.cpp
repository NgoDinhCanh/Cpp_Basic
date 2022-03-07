#include <bits/stdc++.h>
using namespace std;

int main(){
	long long d1,d2,d3;
	cin >> d1>>d2>>d3;
	long long a = 0;
	if(d1>d2){
	a += d2;
	a += min(d1+d2,d3);
	a += min(d1,d3+d2);}
	else{
	a += d1;
	a += min(d1+d2,d3);
	a += min(d2,d3+d1);
	}
	cout << a;
}
