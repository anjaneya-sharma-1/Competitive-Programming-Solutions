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
    vector<ll> v(n+1);
    for(int i =1;i<=n;i++){
        cin>>v[i];
    }
    ll i =1;
    ll j=n;
    ll maxi =n;
    ll mini =1;
    while(i<j){
        if(v[i]==maxi){
            i++;
            maxi--;
            
        }
        else if(v[i]==mini){
            i++;
            mini++;
        }
        else if(v[j]==mini){
            j--;
            mini++;
        }
        else if(v[j]==maxi){
            j--;
            maxi--;
        }
        else{
            cout<<i<<" "<<j<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    
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