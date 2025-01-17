#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<vector<ll>>>pre(11,vector<vector<ll>>(n,vector<ll>(3,0)));
    for(int i=0;i<n;i++){
        ll curr=arr[i];
        for(int i=1;i<=10;i++){
            if(i>curr){
                pre[i][i][2]++;
            }
            else if(i<curr){
                pre[i][i][0]++;
            }
            else{
                pre[i][i][1]++;
            }
        }
    }
    for(int i=1;i<=10;i++){
        for(int j=1;j<n;j++){
            pre[i][j][0]+=pre[i][j-1][0];
            pre[i][j][1]+=pre[i][j-1][1];
            pre[i][j][2]+=pre[i][j-1][2];
        }
    }
    ll ans=0;
    map<vector<ll>,ll>mp;
    for(int i=1;i<=10;i++){
        for(int j=0;j<n;j++){
            ll low=pre[i][j][0];
            ll same=pre[i][j][1];
            ll high=pre[i][j][2];
            if(same>0&&(low==high||abs(low-high)<=same)){
                vector<ll>temp={low,same,high};
                if(low>high){
                    ll diff=min(low-high;

                }

            }
        }
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
        delete s; 

        }
    return 0;
}