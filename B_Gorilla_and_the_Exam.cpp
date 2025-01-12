#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    set<ll>s;
    unordered_map<ll,ll>mp; 
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
      
    }

    vector<ll>nums;
    for(auto it:mp){
        nums.push_back(it.second);
    }
    sort(nums.begin(),nums.end());
    ll ind=0;
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>k){
            break;
        }
        j++;
        k-=nums[i];
    }
    ll ans=nums.size()-j;
    cout<<max(1LL,ans)<<endl;



    
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