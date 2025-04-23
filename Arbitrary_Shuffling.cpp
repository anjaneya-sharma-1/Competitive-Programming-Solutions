#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define N 1000000
#define MOD 1000000007
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace std;
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    ordered_set st;
    bool possible=0;
    bool frst=0;
    vector<ll>a(n);
    ll count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        count+=a[i]==i+1;
    }
    ll ans=(count+1)/2;
    if(n%2&&a[n/2]==n/2+1){
        ll left=0;
        ll right=0;
        ll mid=n/2;
        for(int i=0;i<mid;i++){
            if(a[i]<mid+1)left++;
        }    
        ans=min(ans,left);
   

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