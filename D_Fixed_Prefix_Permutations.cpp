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
    vector<vector<ll>>get_pos(n+1,vector<ll>(m+1,0));
    set<vector<ll>>get_val;
    vector<vector<ll>>arr(n+1,vector<ll>(m+1,0));
    for(ll i=1;i<=n;i++){
        
        for(ll j=1;j<=m;j++){
            ll x;
            cin>>x;
            arr[i][j]=x;
            get_pos[i][x]=j;
            
        }
        vector<ll>temp;
        for(ll j=1;j<=m;j++){
            temp.push_back(get_pos[i][j]);
            get_val.insert(temp);
        }
    }
    for(ll i=1;i<=n;i++){
        vector<ll>temp; 
        ll beauty=0;
        for(ll j=1;j<=m;j++){
            temp.push_back(arr[i][j]);
            if(get_val.find(temp)!=get_val.end()){
                beauty++;
            }
            else{
                break;
            }
        }
        cout<<beauty<<" ";
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