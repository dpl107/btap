#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "UCLN"
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)

ll gcd(ll a,ll b){
	if(b==0)return a;
	return gcd(b,a%b);
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    ll a,b;cin>>a>>b;
    cout<<(gcd(a,b));

}


