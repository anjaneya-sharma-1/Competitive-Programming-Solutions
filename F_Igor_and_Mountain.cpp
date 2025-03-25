#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
void solve() {
    ll n,m,d;
    cin>>n>>m>>d;
    ll maxi=(ll)floor(sqrt((long double)d*d-1));
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
    vector<vector<ll>>arr(n+1);
    vector<vector<ll>>grid(n+1,vector<ll>(m+1,0));
    bool check=1;
    for(ll i=1;i<=n;i++){
        string s;
        cin>>s;
        ll count=0;
        for(ll j=1;j<=m;j++){
            grid[i][j]=(s[j-1]=='X');
            if(grid[i][j]==1){
                arr[i].push_back(j);
                count++;
            }


        }
        if(count==0){
            check=0;
        }
    }
    if(!check){
        cout<<0<<endl;
        return;
    }
    for(auto x: arr[n]){
        ll count=0;
        ll l=lower_bound(arr[n].begin(),arr[n].end(),x-d)-arr[n].begin();
        ll r=upper_bound(arr[n].begin(),arr[n].end(),x+d)-arr[n].begin();
        count=r-l;
        dp[n][x]=count%MOD;
    }
    for(ll i=n-1;i>=1;i--){
        vector<ll>prev(arr[i+1].size()+1,0);
        prev[0]=dp[i+1][arr[i+1][0]];
        for(ll j=1;j<arr[i+1].size();j++){
            prev[j]=prev[j-1]+dp[i+1][arr[i+1][j]];
            prev[j]%=MOD;
        }
        
        vector<ll>temp(arr[i].size(),0);
        for(ll j=0;j<arr[i].size();j++){
            ll x=arr[i][j];
            ll l=lower_bound(arr[i+1].begin(),arr[i+1].end(),x-maxi)-arr[i+1].begin();
            ll r=upper_bound(arr[i+1].begin(),arr[i+1].end(),x+maxi)-arr[i+1].begin();
            ll count=(r>0?prev[r-1]-(l==0?0:(prev[l-1])):0);
            count%=MOD;
            if(count<0) count+=MOD;
            temp[j]=count;
        }
        vector<ll>pref(arr[i].size(),0);
        pref[0]=temp[0];
        for(ll j=1;j<arr[i].size();j++){
            pref[j]=pref[j-1]+temp[j];
            pref[j]%=MOD;
        }
        for(ll j=0;j<arr[i].size();j++){
            ll x=arr[i][j];
            ll l=lower_bound(arr[i].begin(),arr[i].end(),x-d)-arr[i].begin();
            ll r=upper_bound(arr[i].begin(),arr[i].end(),x+d)-arr[i].begin();
            ll tot=(r>0?pref[r-1]:0)-(l==0?0:pref[l-1]);
            tot%=MOD;
            if(tot<0) tot+=MOD;
            dp[i][x]=tot%MOD;
        }

    }
    ll ans=0;
    for(auto i: arr[1]){
        ans+=dp[1][i];
        ans%=MOD;
    }
    cout<<ans<<endl;    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}