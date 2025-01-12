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
    vector<ll>v(n);
    int ind1=-1;
    int ind2=-1;
    int val1=-1;
    int val2=-1;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i]=x;
        if(ind1==-1){
            ind1=i;
            val1=x;
        }
        else if(ind2==-1 && x!=val1){
            ind2=i;
            val2=x;
        }
    }
    if(val2==-1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<n;i++){
        if(v[i]!=val1){
            cout<<ind1+1<<" "<<i+1<<endl;
        }
        else{
            cout<<ind2+1<<" "<<i+1<<endl;
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