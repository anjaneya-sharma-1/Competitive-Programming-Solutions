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
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        if(curr==1&&i!=n-1){
            curr++;
        }
        v.push_back(curr);
    }
    for(int i=0;i<n;i++){
        if(i!=0&&v[i]%v[i-1]==0){
            v[i]++;
        }
        cout<<v[i]<<" ";
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