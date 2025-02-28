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
    char a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll col=-1;
    ll row=-1;
    for(ll i=0;i<n;i++){
        ll count=0;
        for(ll j=0;j<m;j++){
            if(a[i][j]=='*'){
                count++;
            }
        }
        if(count==1){
            row=i;
            break;
        }
    }
    for(ll i=0;i<m;i++){
        ll count=0;
        for(ll j=0;j<n;j++){
            if(a[j][i]=='*'){
                count++;
            }
        }
        if(count==1){
            col=i;
            break;
        }
    }
    cout<<row+1<<" "<<col+1<<endl;
    

    
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