#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,m;
    cin>>n>>k>>m;
    vector<int> v;
    m--;
    for(int i=0;i<n;i++){
        int curr;
        cin>>curr;
        v.push_back(curr);
    }
    vector<int> intervals;
    for(int i=1;i<n;i++){
       
            intervals.push_back(v[i]-v[i-1]-1);
        
    }
    sort(intervals.begin(),intervals.end());
    ll ans=0;
    ans=v[n-1]-v[0]+1;
    for(int i=n-2;i>=0&&m>0;i--){
        ans-=intervals[i];
        m--;
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