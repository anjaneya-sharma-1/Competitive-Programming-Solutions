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
    vector<ll>a(n);
    vector<ll>b(n);
    ll count=0;
    unordered_map<ll,ll>mp;
    vector<ll>col(n+1,0);
    map<ll,vector<ll>>pos;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
        count+=b[i]!=a[i];
        mp[b[i]]=i;
        col[b[i]]+=b[i]!=a[i];
        if(b[i]!=a[i]){
            pos[b[i]].push_back(i);
        }
    }
    vector<ll>c(m);
    vector<ll>d(m);
    for(ll i=0;i<m;i++){
        cin>>c[i];
        col[c[i]]--;
    }
    if(m<count){
        cout<<"NO"<<endl;
        return;
    }

    for(ll i=1;i<=n;i++){
        if(col[i]>0){
           cout<<"NO"<<endl;
              return;
        }
    }
    if(mp.find(c[m-1])==mp.end()){
        cout<<"NO"<<endl;
        return;
    }
    ll last=mp[c[m-1]];
    cout<<"YES"<<endl;
    if(!pos[c[m-1]].empty()){
        last=pos[c[m-1]].back();
        pos[c[m-1]].pop_back();
    }
   


    for(ll i=0;i<m;i++){

        
        if(pos.find(c[i])!=pos.end()&&!pos[c[i]].empty()){
            
            cout<<pos[c[i]].back()+1<<" ";
            pos[c[i]].pop_back();
        }
        else{
            cout<<last+1<<" ";
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