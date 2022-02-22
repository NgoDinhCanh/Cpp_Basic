#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int n ;
	cin >> n ;
	long long S = 1ll*n*(n+1);
	cout <<  fixed << setprecision(2)<<S;
	return 0;
}
