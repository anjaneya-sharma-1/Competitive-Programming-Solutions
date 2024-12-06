#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    void build(vector<vector<ll>>&t,string s,ll v,ll tl,ll tr){
        if(tl==tr){
            t[v][s[tl]-'a']++;
        }
        else{
            ll tm=(tl+tr)/2;
            build(t,s,2*v,tl,tm);
            build(t,s,2*v+1,tm+1,tr);
            for(ll i=0;i<26;i++){
                t[v][i]+=t[v*2][i];
            }
            for(ll i=0;i<26;i++){
                t[v][i]+=t[v*2+1][i];
            }
        }
    }
    void update(vector<vector<ll>>&t,ll v,ll tl,ll tr,ll pos,char newVal,char oldVal){
        if(tl==tr){
            t[v][oldVal-'a']--;
            t[v][newVal-'a']++;
            
        }
        else{
            ll tm=(tl+tr)/2;
            
            if(pos<=tm){
                update(t,2*v,tl,tm,pos,newVal,oldVal);
                t[v][newVal-'a']++;
                t[v][oldVal-'a']--;                
            }
            
            else{
            update(t,2*v+1,tm+1,tr,pos,newVal,oldVal);
            t[v][newVal-'a']++;
                t[v][oldVal-'a']--;  
            }
            
        }
        }
    void getTotal(vector<ll>&k,set<ll>&s){
        for(ll i=0;i<26;i++){
            if(k[i]>0){

                s.insert(i);
            }

        }

    }
    void result(vector<vector<ll>>&t,ll v,ll tl,ll tr,ll l,ll r,set<ll>&s){
        if(l>r){
            return ;
        }
        if(tl==l&&tr==r){
            getTotal(t[v],s);

        }
        else{
        ll tm=(tl+tr)/2;
        result(t,2*v,tl,tm,l,min(r,tm),s);
        result(t,2*v +1,tm+1,tr,max(l,tm+1),r,s);
        }
    }

    
void solve() {
    string s;
    cin>>s;
    ll m;
    cin>>m;
    ll n=s.size();
    vector<vector<ll>>t(4*n,vector<ll>(26));
    build(t,s,1,0,n-1);
    for(ll i=1;i<=m;i++){
        ll op;
        cin>>op;
        if(op==1){
            ll pos;
            char newVal;
            cin>>pos>>newVal;
            pos--;
            update(t,1,0,n-1,pos,newVal,s[pos]);
            s[pos]=newVal;
        }
        else{
            ll l,r;
            cin>>l>>r;
            set<ll> st;
            result(t,1,0,n-1,l-1,r-1,st);
            cout<<st.size()<<endl;
        }
        
    }

}

};
int main(){
    ll t=1;
    //cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}