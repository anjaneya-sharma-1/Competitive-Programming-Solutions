#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    set<ll> st;
    st.insert(0);
    st.insert(n+1);
    for(int i=0;i<n;i++){
        if(s[i]!='.'){
            st.insert(i+1);
        }
    }
    ll count=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            count++;
        }
        else if(count){
            ans+=count-1;
            count=0;
        }
    }
    if(count)ans+=count-1;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        char c;
        cin>>c;
        if(s[x-1]=='.'){
            if(c=='.'){
                cout<<ans<<endl;
            }
            else{
                ll l=*(--st.lower_bound(x));
                ll r=*st.upper_bound(x);
                ans-=r-l-2;
                ans+=max(0ll,x-l-2);
                ans+=max(0ll,r-x-2);
                st.insert(x);
                cout<<ans<<endl;


                
            }
        }
        else{
            if(c!='.'){
                cout<<ans<<endl;
            }
            else{
                ll l=*(--st.lower_bound(x));
                ll r=*st.upper_bound(x);
                ans+=r-l-2;
                ans-=max(0ll,x-l-2);
                ans-=max(0ll,r-x-2);
                st.erase(x);
                cout<<ans<<endl;
            }
        }
        s[x-1]=c;
    }



    
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