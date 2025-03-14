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
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==0){
            continue;
        }
        a.push_back(x);
    }
    n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>0&&i+1<n){
            if(a[i+1]>0){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if (a[i]<=0){
            if(max({a[i],(i-1>=0)?a[i-1]:INT_MIN,(i+1<n)?a[i+1]:INT_MIN})<a[i]+(i-1>=0?a[i-1]:0)+(i+1<n?a[i+1]:0)){
                cout<<"NO"<<endl;
                return;
            }

        }
    }
    cout<<"YES"<<endl;
    
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