#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll l,r;
    cin>>l>>r;
    ll highest=0;
    while(r>>highest){
        highest++;
    }
    vector<ll>lnum(highest,0);
    ll zero=-1;
    for(ll i=0;i<highest;i++){
        if((l>>i)&1){
            lnum[i]=1;
        }
        
    }

    ll first=0;
    ll curr=l;
    for(ll i=highest-1;i>=0;i--){
         if((r>>i)&1&&lnum[i]==1){
            first+=(1<<i);
        }
        else if((r>>i)&1&&lnum[i]==0){
            first+=(1<<i);
            break;
        }
       
    }
    if(r-l==2){
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
        return;
    }
    ll second=first-1;
    if(second==l){
        second=first+1;
    }
    cout<<first<<" "<<second<<" "<<l<<endl;
    
    
    


    
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