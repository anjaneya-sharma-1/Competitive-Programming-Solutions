#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define N 1000000
#define MOD 1000000007
class Solution{
    public:
bool check(vector<int>&a,int mid,int k){
    int count=0;
    unordered_set<int>m; 
    int mex=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<mid&&m.find(a[i])==m.end()){
            m.insert(a[i]);
            mex++;
        }
        if(mex==mid){
            count++;
            m.clear();
            mex=0;
        }
        if(count>=k){
            return true;
        }
 
    }
    return false;}
 
void solve() {
    
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    int r=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        r=max(r,a[i]);
    }
    int l=0;
    int ans=0;
    r++;
    while(l<=r){
        int mid=(l+r)/2;
        if(check(a,mid,k)){
            ans=mid;
            l=mid+1;
            
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;

    
 
    
}
 
};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    
    Solution* s = new Solution(); 
    while (t--){ 

        s->solve();
      
 
        }
    return 0;
}
