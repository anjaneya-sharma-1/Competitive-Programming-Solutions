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
    ll a[n];
    unordered_map<ll,ll> m;
    unordered_map<ll,ll> m1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(m.find(a[i])==m.end()){
        m[a[i]]=i;
        m1[a[i]]=1+i;
        }
        else{
            m1[a[i]]=max(m1[a[i]],i-m[a[i]]);
            m[a[i]]=i;
        }

    }
    vector<ll> b(n,INT_MAX);
    for(auto x:m1){
        m1[x.first]=max(m1[x.first],n-m[x.first]);
        b[m1[x.first]-1]=min(b[m1[x.first]-1],x.first);
    }
    for(int i=1;i<n;i++){
        b[i]=min(b[i],b[i-1]);
    }
    for(int i=0;i<n;i++){
        if(b[i]==INT_MAX){
            cout<<-1<<" ";
        }
        else{
            cout<<b[i]<<" ";
        }
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