#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x%3==0) cout << "Chia het cho 3\n";
	else if (x%3 ==1) cout << "Chia 3 du 1\n";
	else if(x%3==2) cout << "Chia 3 du 2\n";
	return 0;		
}
