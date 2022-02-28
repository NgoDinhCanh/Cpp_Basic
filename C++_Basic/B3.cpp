#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b ;
	int tong = a + b;
	int hieu = a -b;
	long long tich = 1ll*a*b;
	float thuong =(float)a/b;
	cout << tong << endl;
	cout << hieu << endl;
	cout << tich << endl;
	if(b!= 0) cout <<  fixed << setprecision(4)<<thuong << endl;
	else cout << "INVALID"<< endl;
	return 0;		
}
