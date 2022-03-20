#include <bits/stdc++.h>
using namespace std;
bool checkfibo (long long n){
	long long p[93];
	p[0] =0 ,p[1]=1 ; p[2] =1;
    if(n==1 || n==0) return 1;
    for(int i =3 ; i<= 92;i++){
		p[i] = p[i-1] + p[i-2];
		if(p[i]==n) return 1;
	}
	return 0;
}
int main(){
    long long n ; cin>>n;
    if(checkfibo(n)) cout<<"YES";
    else cout << "NO";
    return 0;
}
