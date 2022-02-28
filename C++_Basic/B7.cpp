#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int a,b; cin >> a >> b ;
	int num1 = (a/b)*b;
	int num2 = ((a+b-1)/b)*b;
	cout << num1 << endl;
	cout << num2;
	return 0;		
}
