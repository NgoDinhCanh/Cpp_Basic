#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int a,b,c; 
	cin >> a >> b >>c ;
	if((a+b>c)&&(a+c>b)&&(c+b>a)) cout << "YES\n";
	else cout << "NO";
	return 0;		
}
