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
    vector<ll> v(n);
    map<ll,ll> m;
    ll count =0;
    set<ll>s;
    for(int i =0;i<n;i++){
        ll a;
        cin>>a;
        s.insert(a);
        m[a]++;
    }
    set<ll>::iterator itr;
    for(itr =s.begin(); itr !=s.end();itr++){
        ll curr =*itr;
        if(m[curr-1]<m[curr]){
            count+=m[curr]-m[curr-1];
        }
        else if(m[curr-1]==0){
            //cout<<curr<<" ";
            count+=m[curr];
        }
    }

    cout<<count<<endl;
    
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