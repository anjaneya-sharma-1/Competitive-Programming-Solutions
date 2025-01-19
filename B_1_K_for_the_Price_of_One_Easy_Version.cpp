#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,p,k;
    cin>>n>>p>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans=0;
    ll sum=0;
    for(int i=1;i<n;i+=2){

        sum+=a[i];
        if(sum<=p){
            ans=i+1;
        }
        else{
            sum-=a[i];
            if(sum+a[i-1]<=p){
                ans=i;
            }
            break;
        }
    }
    sum=a[0];
    for(ll i=2;i<n;i+=2){
        sum+=a[i];
        if(sum<=p){
            ans=max(ans,i+1);
        }
        else{
            sum-=a[i];
            if(sum+a[i-1]<=p){
                ans=max(ans,i);
            }
            break;
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