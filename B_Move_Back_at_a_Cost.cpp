#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    }
void solve() {
    ll n;
    cin>>n;
    vector<int>arr(n);
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end(),comp);
    int maxi=-1;
    int c=1;
    for(int i=0;i<n;i++){
        if(v[i].second>maxi){
            cout<<v[i].first<<" ";
            maxi=v[i].second;
            c=0;
        }
        else{
            cout<<v[i].first+1<<" ";
        }
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
        delete s; 

        }
    return 0;
}