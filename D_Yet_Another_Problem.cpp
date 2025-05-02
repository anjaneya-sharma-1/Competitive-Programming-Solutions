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
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    map<ll,vector<ll>>odd;
    map<ll,vector<ll>>even;
    vector<ll>px(n+1,0);
    ll xorr=0;
    even[0].push_back(0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        xorr^=a[i];
        if((i+1)%2){
            odd[xorr].push_back(i+1);
        }
        else{
            even[xorr].push_back(i+1);
        }
        px[i+1]=xorr;
    }
    vector<vector<ll>>pre(n+1,vector<ll>(32,0));
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1];
        for(int j=0;j<=31;j++){
            if((1<<j)&a[i-1]){
                pre[i][j]++;
            }
        }
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll o=0;
        ll zero=1;
        for(ll i=0;i<=31;i++){
            ll diff=(pre[r][i]-pre[l-1][i]);
            if(diff%2){
                o++;
            }
            if(diff){
                zero=0;
            }
        }
        if(zero){
            cout<<0<<endl;
            continue;
        }
        if((r-l+1)%2){
            
            cout<<(o?-1:1)<<endl;
        }
        else{
            
            if(o)cout<<-1<<endl;
            else{
                ll p=(l-1)%2;
                bool check=0;
                if(p){
                    ll x=px[l-1];
                    ll ind=upper_bound(even[x].begin(),even[x].end(),l-1)-even[x].begin();
                    if(ind==even[x].size()){
                        cout<<-1<<endl;
                        continue;
                    }
                    ll e=even[x][ind];
                    if(e<r){
                        check=1;
                    }
                }
                else{
                    ll x=px[l-1];
                    ll ind=upper_bound(odd[x].begin(),odd[x].end(),l-1)-odd[x].begin();
                    if(ind==odd[x].size()){
                        cout<<-1<<endl;
                        continue;
                    }
                    ll e=odd[x][ind];
                    if(e<r){
                        check=1;
                    }

                }
                if(!check){
                    cout<<-1<<endl;
                    continue;
                }
                if(a[l-1]==0||a[r-1]==0){
                    cout<<1<<endl;
                    continue;
                }
                cout<<2<<endl;
                
            }
        }
    }


}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}