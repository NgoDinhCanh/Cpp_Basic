#include <bits/stdc++.h>
using namespace std;

bool cp(long long n){
    long long can = sqrt(n);
    if(can*can == n) return true;
    else false;
}
int main(){
    long long n ; cin>>n;
    if(cp(n)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
