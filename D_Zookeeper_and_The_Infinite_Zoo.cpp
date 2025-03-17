#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll u,v;
    cin>>u>>v;
    if(u>v){
        cout<<"NO"<<endl;
        return;
    }
    if(u==v){
        cout<<"YES"<<endl;
        return;
    }
    ll countu=0;
    for(int i=0;i<32;i++){
        ll uo=u&(1<<i);
        ll vo=v&(1<<i);
        if(uo==vo){
            continue;
        }
        if(uo==0&&vo!=0){
            if(countu==0){
                cout<<"NO"<<endl;
                return;
            }
            countu--;
        }
        else{
            countu++;
        }
    }
    cout<<"YES"<<endl;
    
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
        delete s; 

        }
    return 0;
}