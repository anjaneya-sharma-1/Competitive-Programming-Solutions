#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n, k;
    cin>>n>>k;
    ll sum=0;
    vector<ll> v;
    bool chck=0;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);

    }
    sort(v.begin(),v.end());
    int i=0;
    int j=1;
    while(i<n&&j<n){
        if(v[j]-v[i]==abs(k)){
            chck=1;
            break;
        }
        else if(v[j]-v[i]<abs(k)){
            j++;
        }
        else{
            i++;
        }
    }
    if(chck){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
    
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