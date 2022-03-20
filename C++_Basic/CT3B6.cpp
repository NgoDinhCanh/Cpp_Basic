#include <bits/stdc++.h>
using namespace std;
bool checkfibo (long long n){
	long long f1=0, f2 =1,fn;
    if(n==1 || n==0) return 1;
    else{
    	for(int i =3 ; i<= 92;i++){
		fn = f1+f2;
		fn %= 1000000007;
		f1 = f2;
		f2 = fn;
		if(fn==n) return 1;
		}
		return 0;
	}
}
int main(){
    long long n ; cin>>n;
    if(checkfibo(n)) cout<<"YES";
    else cout << "NO";
    return 0;
}
