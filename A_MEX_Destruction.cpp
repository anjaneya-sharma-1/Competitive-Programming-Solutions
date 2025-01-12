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
    ll c=0;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
        if(curr==0&&i>0&&v[i-1]!=0){
            c++;
        }
    }
    if(v[n-1]!=0){
        c++;
    }
    if(c==0){
        cout<<0<<endl;
        return;
    }
    if(c==1){
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;

    
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