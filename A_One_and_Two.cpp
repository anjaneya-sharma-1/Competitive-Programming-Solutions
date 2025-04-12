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
    ll count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        count+=a[i]-1;
    }
    ll curr=0;
    if(count%2){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        curr+=a[i]-1;
        if(count/2==curr){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;

    
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