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
    vector<ll> dp(n+1,-1);
    ll prev;
    for(int i =1;i<=n;i++){
        ll curr;
        cin>>curr;
        if(i==0){
            prev=curr;
        }
        else if(curr==prev){
            dp[i]=dp[i-1];
        }
        else if(curr!=prev){
            dp[i]=i-1;
        }
        prev=curr;

    }
    ll q;
    cin>>q;
    for(int i=1;i<=q;i++){
        ll l,r;
        cin>>l>>r;
        if(dp[r]==-1||dp[r]<l){
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<dp[r]<<" "<<r<<endl;
        }
    }
    cout<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}