#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    if(n==1){
        cout<<v[0]<<endl;
    }
    else if(k>=3){
        cout<<0<<endl;
    }
    else if(k==1){

        sort(v.begin(),v.end());
        ll mini=v[0];
        for(int i =0;i<n-1;i++){
            mini=min(mini,v[i+1]-v[i]);
        }
        cout<<mini<<endl;
    }
    else{
        vector<ll>a;
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                a.push_back(abs(v[j]-v[i]));
            }
        }
        sort(v.begin(),v.end());
        sort(a.begin(),a.end());
        ll mini=v[0];
        for(int i =0;i<n-1;i++){
            mini=min(mini,v[i+1]-v[i]);
            
        }
        for(int i =0;i<a.size();i++){
            ll j =upper_bound(v.begin(),v.end(),a[i])-v.begin();
            mini=min(mini,abs(v[j]-a[i]));
            if(j!=0){
            mini=min(mini,abs(v[j-1]-a[i]));}
                
            
        }
        cout<<mini<<endl;
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