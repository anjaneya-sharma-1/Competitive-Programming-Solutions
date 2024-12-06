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
    pair<ll,ll> maxi={0,0};
    pair<ll,ll> smaxi={0,0};
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        if(curr>maxi.first){
            smaxi=maxi;
            maxi={curr,i};
        }
        else if(curr>smaxi.first){
            smaxi={curr,i};
        }
    }
    pair<ll,ll> a={0,0};
    pair<ll,ll> b={0,0};
    ll m=0;
    vector<ll>v;
    for(int j=0;j<n;j++){
        ll curr;
        cin>>curr;
        if(curr>a.first){
            b=a;
            a={curr,j};
        }
        else if(curr>b.first){
            b={curr,j};
        }
        v.push_back(curr);
    }
    ll m1=max(maxi.first,v[maxi.second]);
    ll m2=max(smaxi.first,v[smaxi.second]);
    if(m1!=m2){
        cout<<"YES"<<endl;
    }
    else{
        if(max(a.first,maxi.first)!=max(m1,m2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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