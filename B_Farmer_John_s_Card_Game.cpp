#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    ll c=1;
    vector<vector<ll>>v(n,vector<ll>(m));
    vector<pair<ll,ll>>p;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
        sort(v[i].begin(),v[i].end());
        for(int j=1;j<m;j++){
            if(v[i][j]!=v[i][j-1]+n){
                c=0;
            }
        }
        p.push_back({v[i][0],i});
    }
    if(c==0){
        cout<<"-1"<<endl;
        return;
    }
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++){
        cout<<p[i].second+1<<" ";
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