#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int a,b,c; 
	cin >> a >> b >>c ;
	if((a+b>c)&&(a+c>b)&&(c+b>a))
		if(a==b && b==c ) cout << "1";
		else if (a==b || b==c|| c==a) cout << "2";
		else if ((a*a + b*b == c*c) || (a*a + c*c == b*b )|| (c*c+ b*b ==a*a)) cout << "3";
		else cout << "4";
	else cout << "INVALID";
	return 0;		
}
