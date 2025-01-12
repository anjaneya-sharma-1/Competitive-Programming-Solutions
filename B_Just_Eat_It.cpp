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
    ll sum=0;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
        sum+=curr;
    }
    ll maxi=0;
    ll curr=0;
    ll s=0;
    ll ind=0;
    for(int i=0;i<n;i++){
        curr+=v[i];
        maxi=max(maxi,curr);
        if(curr>=sum){
            ind=i;
            break;
        }
        if(curr<=0){
            curr=0;
            s=i+1;
        }
    }
    if(maxi>=sum&&(ind!=n-1||s!=0)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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