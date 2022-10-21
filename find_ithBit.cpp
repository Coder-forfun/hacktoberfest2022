#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, i;
    cin>>n>>i;
    int mask = 1<<i;
    if(n&mask){
        cout<<1;
    }
    else{
        cout<<0;
    }

    return 0;
}
