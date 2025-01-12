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
    vector<ll>v(n);
    stack<ll>s1;
    stack<ll>s2;
    for(int i=0;i<n;i++){
        cin>>v[i];
       
    }
    for(int i=n-1;i>=0;i--){
        s1.push(v[i]);
    }
    while(q--){
        ll x;
        cin>>x;
        ll c=1;
        
        
        while(s1.top()!=x){
            c++;
            s2.push(s1.top());
            s1.pop();
        }
        cout<<c<<" ";
        s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        s1.push(x);
        
    }
    cout<<endl;

    
}

};
int main(){
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}