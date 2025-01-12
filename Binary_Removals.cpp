#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,x;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    vector<ll>v;
    ll modd=x%k;
    ll count=0;
    ll ans=0;
    ll t=0;
    ll c=0;
    ll last_ind=0;
    ll c2=0;
    ll last=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            last_ind=i;
        }
    }
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            if(count==0){
                c=1;
            }
           
            if(count>x){
                ans++;
                count-=x;
                count+=modd;
            }
            else if(count>=k&&i==last_ind){
                c2=1;
                last=count;
                break;
            }
            count*=2;
        }
        else{
            count++;
        }
    }
    if(c2){
        ans++;
        count-=(last);
        count+=last%k;
    }
    if(count>0){
        ans++;
    }
    
   

    cout<<ans<<endl;
 

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