#include <bits/stdc++.h>
using namespace std;

int main(){
   	int a1,a2,a3,b1,b2,b3,n;
   	long long sum1=0 , sum2=0,TH1=0,TH2=0;
   	cin>>a1>>a2>>a3>>b1>>b2>>b3;
   	cin>>n;
   	sum1 = a1+a2+a3;
   	sum2 = b1+b2+b3;
   	if(sum1%5==0) TH1=sum1/5;
   	else TH1 = sum1/5+1;
   	if(sum2%10==0) TH2=sum2/10;
   	else TH2 = sum2/10+1;
   	if((TH1+TH2)<=n) cout<< "YES";
   	else cout<<"NO";
   	return 0;
}
