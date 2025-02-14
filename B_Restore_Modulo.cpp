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
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll c=-1;
    ll d=-1;

    for(ll i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            if(c==-1){
                c=v[i]-v[i-1];
            }
            else if(v[i]-v[i-1]!=c){
                cout<<-1<<endl;
                return;
            }
        }
        else if(v[i]<v[i-1]){
            
            if(d==-1){
                d=v[i-1]-v[i];
            }
            else if(v[i-1]-v[i]!=d){
                cout<<-1<<endl;
                return;
            }
            
        } 
    }
    if(c==-1||d==-1){
        cout<<0<<endl;
        return;
    }
    ll m=c+d;
    for(int i =1;i<n;i++){
        ll val=(v[i-1]+c)%m;
        if(val!=v[i]||m<c||v[i]>=m||v[i-1]>=m){
            cout<<-1<<endl;
            return;
        }
            
    }
    cout<<m<<" "<<c<<endl;
    

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