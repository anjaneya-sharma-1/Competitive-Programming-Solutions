#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    vector<ll>cnt;
        vector<vector<ll>>cnt2;
        vector<vector<vector<ll>>>cnt3;
        vector<vector<vector<vector<ll>>>>cnt4;
        Solution (){
            cnt = vector<ll>(30,0);
            cnt2 = vector<vector<ll>>(30,vector<ll>(30,0));
            cnt3 = vector<vector<vector<ll>>>(30,vector<vector<ll>>(30,vector<ll>(30,0)));
            cnt4 = vector<vector<vector<vector<ll>>>>(30,vector<vector<vector<ll>>>(30,vector<vector<ll>>(30,vector<ll>(30,0))));
        }
void solve() {
        ll n;
        cin >> n;
        ll tot = 0;
        
        ll ans = 0;
        vector<vector<ll>>arr(n);
        
        for (ll i = 0; i < n; i++){
            ll x;
            cin >> x;
       
            vector<ll> bits;
            for (ll b = 0; b < 30; b++){
                if(x & (1 << b)){
                    bits.push_back(b);
                }
            }
            arr[i] = bits;
            ll k = bits.size();
            ll exc = 0;
            for (ll b : bits){
                exc += cnt[b];
            }
            for (ll j = 0; j < k; j++){
                for (ll l = j+1; l < k; l++){
                    exc -= cnt2[bits[j]][bits[l]];
                }
            }
            if(k >= 3){
                for (ll j = 0; j < k; j++){
                    for (ll l = j+1; l < k; l++){
                        for (ll m = l+1; m < k; m++){
                            exc += cnt3[bits[j]][bits[l]][bits[m]];
                        }
                    }
                }
            }
            if(k == 4){
                exc -= cnt4[bits[0]][bits[1]][bits[2]][bits[3]];
            }
            ll visited = tot;       
            ll disjoint = visited - exc;
            ans += disjoint + 2LL * (visited - disjoint);
            tot++;
            for (ll b : bits){
                cnt[b]++;
            }
            for (ll j = 0; j < k; j++){
                for (ll l = j+1; l < k; l++){
                    cnt2[bits[j]][bits[l]]++;
                }
            }
            if(k >= 3){
                for (ll j = 0; j < k; j++){
                    for (ll l = j+1; l < k; l++){
                        for (ll m = l+1; m < k; m++){
                            cnt3[bits[j]][bits[l]][bits[m]]++;
                        }
                    }
                }
            }
            if(k == 4){
                cnt4[bits[0]][bits[1]][bits[2]][bits[3]]++;
            }
        }
        
        cout<<ans<<endl;
        for(ll i=0;i<n;i++){
            ll k=arr[i].size();
            for(ll j=0;j<k;j++){
                cnt[arr[i][j]]=0;
            }
            for(ll j=0;j<k;j++){
                for(ll l=j+1;l<k;l++){
                    cnt2[arr[i][j]][arr[i][l]]=0;
                }
            }
            if(k>=3){
                for(ll j=0;j<k;j++){
                    for(ll l=j+1;l<k;l++){
                        for(ll m=l+1;m<k;m++){
                            cnt3[arr[i][j]][arr[i][l]][arr[i][m]]=0;
                        }
                    }
                }
            }
            if(k==4){
                cnt4[arr[i][0]][arr[i][1]][arr[i][2]][arr[i][3]]=0;
            }
        }
        
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    Solution* s = new Solution(); 
    while (t--){ 
      
        s->solve();
      

        }
    return 0;
}