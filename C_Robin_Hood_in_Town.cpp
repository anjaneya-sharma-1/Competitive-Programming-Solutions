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
    ll sum =0;
    ll maxi =0;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        maxi=max(curr,maxi);
        sum+=curr;
        v.push_back(curr);
    }
    sort(v.begin(),v.end());
    double avg = sum*1.0/n;
    ll req = n*1.0*v[n/2]*2*1.0 +1;
    if(n==2||n==1){
        cout<<-1<<endl;
        return;
    }
    if(req<=sum){
        cout<<0<<endl;
        return;
    }
    else{
        cout<<req-sum<<endl;
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