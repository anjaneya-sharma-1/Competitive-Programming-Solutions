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
    ll ans=0;
    while(n>=6){
        if(n%6==0){
            n/=6;
            ans++;
        }
        else if(n%3==0){
            n/=3;
            ans+=2;
        }
        else{
            cout<<-1<<endl;
            return;
            
        }
    }

    if(n==1){
        cout<<ans<<endl;
        return;
    }
    else if(n==3){
        cout<<ans+2<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
        return;
    }
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}