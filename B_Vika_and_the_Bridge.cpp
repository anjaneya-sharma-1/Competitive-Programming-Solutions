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
    vector<ll>v2(k+1,0);
    vector<pair<ll,ll>>v3(k+1,{0,0});
    for(int i =1;i<=n;i++){
        ll c;
        cin>>c;
        ll dif=i-v2[c]-1;
        v2[c]=i;
        if(dif>=v3[c].first){
            v3[c].second=v3[c].first;
            v3[c].first =dif;
            
        }
        else if(dif>v3[c].second){
            v3[c].second=dif;
        }
    }
    for(int c =1;c<=k;c++){
        ll dif=n-v2[c];
        
        if(dif>=v3[c].first){
            v3[c].second=v3[c].first;
            v3[c].first =dif;
        }
        else if(dif>v3[c].second){
            v3[c].second=dif;
        }
    }
    ll mini =LLONG_MAX;
    for(int i =1;i<=k;i++){
        mini=min(max(v3[i].first/2,v3[i].second),mini);
    }
    cout<<mini<<endl;

    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}