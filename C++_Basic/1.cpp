#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int C ;
	cin >> C ;
	double F = ((float)C*9/5) +32;
	cout << fixed <<setprecision(2)<<F ;
	return 0;
}
