#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool check(ll mid,string&s){
        ll n=s.size();
        ll ptr=0;
        vector<ll>p;
        vector<ll>food;
        for(ll i=0;i<n;i++){
            if(s[i]=='*'){
                food.push_back(i);
            }
            if(s[i]=='P'){
                p.push_back(i);
            }
        }
        for(auto x:p){
            ll l=x;
            ll r=x;
            while(ptr<food.size()){
                l=min(l,food[ptr]);
                r=max(r,food[ptr]);
                if(r-l+min(x-l,r-x)>mid){
                    break;
                }
                ptr++;
            }


        }
        return ptr==food.size();
    }

        
void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll l=0;
    ll r=3*n;
   

    while(l<r){
        ll mid=(l+r)/2;
        if(check(mid,s)){
        
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<l<<endl;


    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    Solution* s = new Solution(); 
    while (t--){ 
        
        s->solve();
        

        }
    return 0;
}