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
    string s;
    cin>>s;
    ll a=0;
    ll b=0;
    queue<ll>q1;
    queue<ll>q2;
    for(ll i=0;i<n;i++){
        if(s[i]=='D'){
            
            q1.push(i);
        }else{
            
            q2.push(i);
        }
    }
    while(!q1.empty()&&!q2.empty()){
        int d=q1.front();
        int r=q2.front();
        q2.pop();
            q1.pop();
        if(d<r){
            
            q1.push(d+n);
        
    }
    else{
        
        q2.push(r+n);
    }
    }
    cout<<(q1.empty()?"R":"D")<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}