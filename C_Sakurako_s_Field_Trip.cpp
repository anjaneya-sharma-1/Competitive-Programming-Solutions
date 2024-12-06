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
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
    }
    ll disturbance =0;
    for(int i =0;i<n-1;i++){
        if(v[i]==v[i+1]){
            disturbance++;
        }
    }
    ll potential=0;
    ll rejected =0;
    for(int i =0; i + 1 < n - 1 - (i + 1);i++){
        potential = (v[i]==v[i+1])+(v[n-i-2]==v[n-i-1]);
        rejected = (v[i]==v[n-i-2])+(v[n-i-1]==v[i+1]);
        potential-=rejected;
        potential= max(potential,0LL);
        disturbance-=potential;
    }
    cout<<disturbance<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}