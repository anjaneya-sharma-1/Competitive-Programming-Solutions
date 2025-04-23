#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n/2);
    ordered_set st;
    for(ll i=1;i<=n;i++){
        st.insert(i);
    }
    bool fail=0;
    for(int i=0;i<n/2;i++){
        cin>>a[i];
        if(st.find(a[i])==st.end())fail=1;
        st.erase(a[i]);
    }
    if(fail){
        cout<<-1<<endl;
        return;
    }
    vector<ll>ans;
    for(int i=(n/2) -1;i>=0;i--){
        ans.push_back(a[i]);
        int ind= st.order_of_key(a[i]);
        ind--;
        if(ind<0){
            cout<<-1<<endl;
            return;
        }
        ll elem=*st.find_by_order(ind);
        ans.push_back(elem);
        st.erase(elem);
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    

    
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