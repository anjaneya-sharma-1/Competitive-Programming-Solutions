#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,w;
    ll m=32-__builtin_clz(w);
    vector<ll>mask(m,0);
    
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        mask[31-__builtin_clz(curr)]++;
    }
    for(int i=m-1;i>0;i--){
        if(mask[i]==0){
            for(int j=i-1;j>=0;j--){
                if(mask[j]>0){
                    mask[j]=max(0LL,mask[j]-(1<<(i-j)));
                }    
            }
        }
        
    }
    cout<<*max_element(mask.begin(),mask.end())<<endl;
    
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