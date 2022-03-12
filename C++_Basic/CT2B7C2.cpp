#include <bits/stdc++.h>
using namespace std;

int main(){
   long long n; cin>>n;
   long long i =1;
   long long sum = 0;
   while(n--){
   		sum += i*i;
   		++i;
	   }
	cout << sum;
   
}
