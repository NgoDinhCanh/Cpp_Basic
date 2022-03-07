#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,d; cin>> a>>b>>c>>d;
	long long res1= min(a,b),res2 = min(c,d);
	cout << min(res1,res2);

}
