#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int n ;
	cin >> n ;
	double S = 1-1.0/(n+1);
	cout <<  fixed << setprecision(2)<<S;
	return 0;
}
