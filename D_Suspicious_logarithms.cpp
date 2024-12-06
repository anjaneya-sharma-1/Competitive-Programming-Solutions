#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;
long long powe(long long base, long long exp, long long mod = -1) {
    long long result = 1;  
    while (exp > 0) {
        
        if (exp % 2 == 1) {
            result = (mod == -1) ? result * base : (result * base) % mod;
        }
        
        base = (mod == -1) ? base * base : (base * base) % mod;
        
        exp /= 2;
    }
    return result;
}
void solve() {
    ll a,b;
    cin>>a>>b;
    vector<pair<ll,ll>>ans;
    vector<ll>L;
    ll num=4;
    ll power=2;
    ll maxi=(long long) 1<<62;
    while(num<maxi){
        ll next_num=num*2;
        ll start=0;
        while(powe(power,start)<=num){
            start++;
        }
        start--;
        ll last=start;
        while(powe(power,last)<next_num){
            last++;
        }
        last--;
        for(ll i=start;i<=last;i++){
            L.push_back(max(powe(power,i),num));
            ans.push_back({max(powe(power,i),num),i});
        }
        power++;
        num=next_num;
        
    }
    ll sol=0;
    
    ll u1=upper_bound(L.begin(),L.end(),a)-L.begin()-1; 
    ll u2=upper_bound(L.begin(),L.end(),b)-L.begin()-1;
    if(u1==u2){
        sol=(sol+(b+1-L[u2])*(ans[u2].second)+MOD)%MOD;
        cout<<sol<<endl;
        return;
    }
    sol=(sol+(L[u1+1]-a)*(ans[u1].second)+MOD)%MOD;
    sol=(sol+(b+1-L[u2])*(ans[u2].second)+MOD)%MOD;
    for(ll i=u1+1;i<=u2-1;i++){
        sol=(sol+MOD+(L[i+1]-L[i])*(ans[i].second))%MOD;
    }
    cout<<sol<<endl;
    

    


    
}
int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}