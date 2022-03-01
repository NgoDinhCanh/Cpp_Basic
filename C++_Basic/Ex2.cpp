#include<bits/stdc++.h>

using namespace std;
int main(){
	char x;
	cin >> x;
	if(x=='Z' || x=='z') cout << 'a';
	else if(x>='A'|| x<='Z') cout << (char)(x+33);
	else  cout << (char)(x+1);
	return 0;
	}
