#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,q;
    cin>>n>>q;
    vector<ll> v;
    vector<ll> ps;
    ll sum=0;
    ll maxi =0;
    
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        sum+=curr;
        if(curr>maxi){
            v.push_back(curr);
            maxi=curr;
            ps.push_back(sum);
        }
        else{
            ps.back() = sum;
        }
    }
    
    

    vector<ll> qr(q);
    for(int i =0;i<qr.size();i++){
        ll a;
        cin>>a;
        auto it = lower_bound(v.begin(), v.end(), a);

           if(a==v[it-v.begin()]){
                    cout<<ps[it-v.begin()]<<" ";
                }
           else
            {if (it == v.begin()) {
                if(a<v[0]){
                cout << 0 << " ";}
                
                else{
                    cout<<ps.back()<<" ";
                } 
            } else {
               
                cout << ps[it - v.begin() -1] << " "; 
            }}

    }  
    cout<<endl;
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