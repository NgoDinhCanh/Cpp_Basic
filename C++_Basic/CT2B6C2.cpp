#include <bits/stdc++.h>
using namespace std;

int main(){
   int n ; cin>>n;
   int i = 1;
   long sum = 0;
   while(n--)
   {
   	 sum +=i;
   	 ++i;
   }
   cout << sum;
}
