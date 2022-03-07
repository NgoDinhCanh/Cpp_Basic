#include <bits/stdc++.h>
using namespace std;

int main(){
    double a ; cin>> a;
    double res = a-(int)a;
    if(res>0.5) cout << (int)a+1;
    else cout << (int)a;

}
