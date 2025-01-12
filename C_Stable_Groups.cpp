#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
     ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<ll>diff;
    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]>x){
            diff.push_back((v[i]-v[i-1]-1)/x);
        }
    }
    sort(diff.begin(),diff.end());
    int ans=diff.size()+1;
    for(int i=0;i<diff.size();i++){
        if(k>=diff[i]){
            k-=diff[i];
            ans--;
        }
    }
    cout<<ans<<endl;
    
}

};
int main(){
    ll t=1;
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}