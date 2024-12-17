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
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    vector<vector<ll>>pf(n+1,vector<ll>(31,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<30;j++){
            if(v[i]&(1<<j)){
                pf[i+1][j]=pf[i][j]+1;
            }
            else{
                pf[i+1][j]=pf[i][j];
            }
        }
    }
    ll q;
    cin>>q;
    while(q--){
        ll l,k;
        cin>>l>>k;
        ll r=n;
        if(v[l-1]<k){
            cout << -1 << " ";
            continue;
        }
        ll lo=l;
        ll maxi=-1;
        while(lo<=r){
            ll mid=(lo+r)/2;
            ll num=0;
            for(int i=0;i<30;i++){
                if(pf[mid][i]-pf[l-1][i]==mid-l+1){
                    num+=(1<<(i));
                }
            }
            if(num<k){
                r=mid-1;
            }
            else{
                //cout<<l<<" "<<mid<<endl;
                maxi=max(maxi,mid);
                lo=mid+1;
        }       
    }
    cout<<maxi<<" ";   
}

cout<<endl;
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