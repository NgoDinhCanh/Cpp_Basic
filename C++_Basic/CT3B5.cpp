#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    long long f1=0, f2 =1,fn;
    if(n==1) cout <<0;
    else if (n==2) cout <<1;
    else{
    	for(int i =3 ; i<=n;i++){
		fn = f1+f2;
		fn %= 1000000007;
		f1 = f2;
		f2 = fn;
		}
		cout << fn;
	}
    return 0;
}
