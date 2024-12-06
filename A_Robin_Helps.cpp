#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    ll gold =0;
    ll c=0;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        if(curr==0&&gold>0){
            gold--;
            c++;
        }
        if(curr>=k){
            gold+=curr;
        }
    }
    cout<<c<<endl;
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