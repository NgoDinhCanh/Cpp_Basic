#include <bits/stdc++.h>
using namespace std;

int main(){
	int N ; cin >> N;
	int dem = 0;
	for(int i=1;i<=N;i++){
		if(N%i==0) { 
		++dem;
		}
	}
	cout<<dem<< endl;
	for (int i=1;i<=N;i++)
	{
		if(N%i==0) cout<<i<<" ";
	}
	return 0;
}
