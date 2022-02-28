#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int x; 
	cin >> x;
	long long A = (long long)x*x*x+3*(long long)x*x+x+1;
	cout << A;
	return 0;
}
