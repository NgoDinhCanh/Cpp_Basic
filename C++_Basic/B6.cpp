#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int C; cin >> C;
	if(0<=C<=106) {
		double F = (C*1.0*9/5)+32;
		cout << fixed << setprecision(2)<< F;
	}
	
	return 0;		
}
