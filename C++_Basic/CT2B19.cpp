#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    for (int i=1;i<=n;i++)
    {
        for(int j=1 ; j<=n ;j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i=1;i<=n;i++)
    {
        for(int j=1 ; j<=n ;j++)
        {
            if(j==n||i==n||i==1||j==1) cout<<"*";
            else cout<< " ";
        }
        cout << endl;
    }
    cout<< endl;
    for (int i=1;i<=n;i++)
    {
        for(int j=1 ; j<=n ;j++)
        {
            if(j==n||i==n||i==1||j==1) cout<<"*";
            else cout<< "#";
        }
        cout << endl;
    }
    cout<< endl;
    for (int i=1;i<=n;i++)
    {
        for(int j=1 ; j<=n ;j++)
        {
            if(j==n||i==n||i==1||j==1) cout<<i<<" ";
            else cout<< "  ";
        }
        cout << endl;
    }
    
}
