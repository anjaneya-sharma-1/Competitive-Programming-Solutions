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
    vector<ll>a(n);
    vector<ll>b(n);
    unordered_map<ll,ll>m1;
    unordered_map<ll,ll>m2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m1[a[i]]=i;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        m2[a[i]]=b[i];
    }
    for(int i=0;i<n;i++){
        if(b[m1[b[i]]]!=a[i]){
            cout<<-1<<endl;
            return;
        }
    }
    


}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}