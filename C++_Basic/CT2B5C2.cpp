#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    bool check = false;
    while(n--)
	{
		int n1 ; cin>>n1;
		if(n1==2022)
		{ 
			check = true;
			break;
		}
	}
	if(check == true) cout << "YES";
	else cout<<"NO";
}
