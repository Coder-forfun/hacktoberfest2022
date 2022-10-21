#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    // cout << gcd(12, 18) << endl;

	while(t--){
        int n, q;
    	cin >> n >> q;
    	int a[n+1];
        for(int i = 1; i <= n; i++){
    	    cin >> a[i];
    	}
        int pre[n + 1], suf[n + 2];
        pre[0] = 0;
        for(int i = 1; i <= n; i++){
            pre[i] = gcd(pre[i - 1], a[i]);
        }
        suf[n + 1] = 0;
        for(int j = n; j > 0; j--){
            suf[j] = gcd(suf[j + 1], a[j]);
        }
        while(q--){
            int l, r;
    	    cin >> l >> r;
            cout << gcd(pre[l - 1], suf[r + 1]) << endl;
        }
	}
    return 0;
}
