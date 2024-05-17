#include<bits/stdc++.h>

#define ll long long
using namespace std;
const int N = 1e5 + 10;
const int mod = 1e9+7;


ll mx;
ll mn;

ll ceil2(ll a, ll b) {
    if (a == 0) return 0;
    return (a - 1)/b + 1;
}

ll B_least(ll r){
  ll check = (mn) - (r*r); 
  return ceil(sqrt(check)) > r? -1:ceil(sqrt(check));
}

ll B_most(ll r){

  ll check = (mx) - (r*r); 
  ll gt = sqrt(check);
  if((gt*gt) + (r*r) == mx){
    gt = gt-1;
  }
  if((r*r) + (r*r) < mx) gt = r;
  return gt;  
}

int main(){
  int t; cin>>t;
  while(t--){
    ll x; cin>>x;
    ll ans = 0;
    mn = (x*x);
    mx = ((x+1)*(x+1));
    ll z = 0;
    for(ll r=x; r>=1; r--){
      z++;
      ll x1 = B_least(r);
      ll y1 = B_most(r);
      if(x1 == -1 || y1 == -1){
        break;
      }
      if(x1 == 0 && y1 == r){
        ans += (abs(x1-y1)*8);
      }else if(x1 == 0 || y1 == r){
        ans += (8*(abs(x1 - y1) + 1)) - 4;
      }else{
        ans += (8 * (abs(x1 - y1) + 1));
      }

    }
    cout<<ans<<endl;
  }
  return 0;
}
