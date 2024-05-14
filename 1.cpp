#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll inf = 1e9;
const ll N = 401;
const ll M = 998244353;
//1.Complete observations
//2.Find flaws, try to prove
//3.Implemetation ideas
//4.Implement
//5.Check for edge cases and possible errors
//6. Defeat the problem

ll dp[31][31];

// string s;
string S(ll a, ll b, ll k){
    string s = "";
    if(a == 0){
        for(int i=0; i<b; i++){
            s+='b';
        }
        return s;
    }
    if(b == 0){
        for(int i=0; i<a; i++){
            s+='a';
        }
        return s;
    }
    if(dp[a-1][b] >= k) s = s + 'a' + S(a-1,b,k);
    if(dp[a-1][b] < k) s = s + 'b' + S(a,b-1,k - dp[a-1][b]);
    return s;
}
void solve(){

    dp[0][0] = 1;
    for(int i=0; i<31; i++){
        dp[i][0] = 1;
        dp[0][i] = 1;
    }

    for(int i=0; i<31; i++){
        for(int j=0; j<31; j++){
            if(i-1>=0 && j-1 >= 0) dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    // s = "";
    ll a,b,k; cin>>a>>b>>k;
    cout<<S(a,b,k);
}
int main(){
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    int tes; tes = 1;
    //cin>>tes;
    for(int i=0; i<tes; i++){
        solve();
    }
    return 0;
}