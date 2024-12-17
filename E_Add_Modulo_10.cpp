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
    ll r;
    int c=1;
    int c2=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        while(x%10!=0&&x%10!=2){
            x+=(x%10);
        }
        if(x%10==0){
            c2=1;
        }
        if(i!=0&&x%20!=r){
            c=0;
        }
        else{
            r=x%20;
        }
        v.push_back(x);
       
    }
    if(c2&&c){
        int k =v[0];
        for(int i=1;i<n;i++){
            if(v[i]!=k){
                c=0;
                break;
            }
        }
    }
    cout<<(c==1?"Yes":"No")<<endl;

    
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