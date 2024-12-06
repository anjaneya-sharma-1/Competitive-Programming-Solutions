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
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    for(int i=1;i<n-1;i++){
        ll j=v[i];
        if(j==3&&(((v[i+1]!=v[i-1])&&(v[i+1]==3||v[i-1]==3)&&(v[i+1]==1||v[i-1]==1))||(v[i+1]==2&&v[i-1]==2))){
            v[i]=1;
        }
    }
    for(int i=n-2;i>0;i--){
        ll j=v[i];
        if(j==3&&(((v[i+1]!=v[i-1])&&(v[i+1]==3||v[i-1]==3)&&(v[i+1]==1||v[i-1]==1))||(v[i+1]==2&&v[i-1]==2))){
            v[i]=1;
        }
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
    
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