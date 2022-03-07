#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int N; cin>> N;
    if(N>=0){
        if(N%2 ==0) cout << "YES\n";
        else cout << "NO\n";
        if(N%3 ==0&& N%5==0) cout << "YES\n";
        else cout << "NO\n";
        if(N%3==0 && N%7!=0) cout << "YES\n";
        else cout << "NO\n";
        if(N%3==0 || N%7==0) cout << "YES\n";
        else cout << "NO\n";
        if(30<N&& N<50) cout << "YES\n";
        else cout << "NO\n";
        if(30<=N && (N%2==0||N%3==0||N%5==0)) cout << "YES\n";
        else cout << "NO\n";
        if(N<=30 &&N<=99 && (N%2==0 ||N%3==0 ||N%5==0 ||N%7 ==0)) cout << "YES\n";
        else cout << "NO\n";
        if(N<=100 && N%23==0) cout << "YES\n";
        else cout << "NO\n";
        if(N<10 || N>20) cout << "YES\n";
        else cout << "NO\n";
        if((N%10)%3==0) cout << "YES\n";
        else cout << "NO\n";
        }
    return 0;   
    }
