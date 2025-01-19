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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]>a[1]){
        cout<<"NO"<<endl;
        return;
    }
    a[1]-=a[0];
    a[0]=0;
    for(int i=2;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"NO"<<endl;
            return;
        }
        a[i]-=a[i-1];
        a[i-1]=0;
    }
    ll maxi=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]||a[i]<maxi){
            cout<<"NO"<<endl;
            return;
        }
        maxi=max(maxi,a[i]);

    }
    cout<<"YES"<<endl;
    
    
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
        delete s; 

        }
    return 0;
}