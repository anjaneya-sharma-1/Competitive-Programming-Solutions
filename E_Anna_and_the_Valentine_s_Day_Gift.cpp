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
    vector<ll>v;
    ll c=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        c+=log10(x)+1;
        ll t=0;
        while(x%10==0){
            x/=10;
            t++;
        }
        if(t>0){
            v.push_back(t);
        }
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i-=2){
        c-=v[i];
    }
  
    if(c<m+1){
        cout<<"Anna"<<endl;
    }
    else{
        cout<<"Sasha"<<endl;
        }
    
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