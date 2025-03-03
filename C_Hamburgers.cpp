#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string st;
    cin>>st;
    ll B=0,S=0,C=0;
    cin>>B>>S>>C;
    ll nb=0,ns=0,nc=0;
    cin>>nb>>ns>>nc;
    ll money;
    cin>>money;
    ll l=0;
    ll r=1e15;
    ll ans=0;
    ll b=0,s=0,c=0;
        for(ll i=0;i<st.size();i++){
            if(st[i]=='B'){
                b++;
            }
            else if(st[i]=='S'){
                s++;
            }
            else{
                c++;
            }
        }
    while(l<r){
        ll mid=(l+r)/2;
        ll possible=0;
        ll required=(max(0ll,(b*mid)-B))*nb+(max(0ll,(s*mid)-S))*ns+(max(0ll,(c*mid)-C))*nc;
        if(required<=money){
            possible=1;
        }
        if(possible){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid;
        }
    }
    cout<<ans;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}