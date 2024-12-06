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
    ll ans =1;
    vector<ll>v;
    ll maxi=0;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
        maxi=max(maxi,curr);
    }
    for(int i =2;i<=maxi;i++){
        ll count=0;
        for(int k =0;k<n;k++){
            while(v[k]%i==0){
                v[k]/=i;
                count++;
            }
        }
        if(count%n!=0){
            cout<<"NO"<<endl;
            return;
        }
        
    }

    cout<<"YES"<<endl;
    
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