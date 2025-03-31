#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<ll>vis(n+1,0);
    ll ans=0;
    bool found=0;
    for(ll i=1;i<=n;i++){
        if(vis[i]||a[i]==i){
            continue;
        }
        ll j=i;
        ll count=0;
        set<ll>st;
        
        while(!vis[j]){
            if(!st.empty()&&!found){
                ll prev=*(--st.upper_bound(j));

                ll next=(st.upper_bound(j)==st.end()?0:*(st.upper_bound(j)));
                if(j-1==prev||j+1==next){
                    found=1;

                }
            }
            vis[j]=1;

            st.insert(j);
            j=a[j];
           
            count++;
        }
        if(count>0){
            ans+=count-1;
        } 
        
    }
    if(found){
        cout<<ans-1<<endl;
    }
    else if(ans==0){
        cout<<1<<endl;
    }
    else{
        cout<<ans+1<<endl;
    }
    
    
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