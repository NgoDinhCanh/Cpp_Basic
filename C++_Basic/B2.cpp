#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	long long S = (long long)a*(b+c)+(long long)b*(a+c);
	cout << S;
	return 0;
		
}
