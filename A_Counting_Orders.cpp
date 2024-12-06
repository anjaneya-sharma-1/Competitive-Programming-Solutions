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
    vector<ll>b;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        a.push_back(curr);
    }
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        b.push_back(curr);
    }
    ll ans=1;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<>());
    for(int i=0;i<n;i++){
        ll num=a.end()-upper_bound(a.begin(),a.end(),b[i])-i;
        if(num==0){
            cout<<0<<endl;
            return;
        }
        else{
            ans=(ans*num)%MOD;
        }
    }
    cout<<ans<<endl;
    

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