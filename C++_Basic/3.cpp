#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int a,b ;
	cin >> a >> b;
	double res = pow(a,b);
	cout << fixed << setprecision(2)<< res;
	return 0;
}
