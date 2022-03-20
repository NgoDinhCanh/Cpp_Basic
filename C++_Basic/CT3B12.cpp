#include <bits/stdc++.h>
using namespace std;
bool check(int n ){
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1;
}

int find(int n){
	for(int i=2;i<= sqrt(n);i++){
		if(n%i==0) return i;
	}
	return n;
}
int main(){
    int n; cin>>n;
    for(int i =1;i<=n;i++){
		cout<< find(i) << endl;
	}
    return 0;
}
