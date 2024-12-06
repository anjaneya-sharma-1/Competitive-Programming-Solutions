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
    ll prev;
    int c =1;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        
        if(i==0){
            prev=curr;
        }
        else{
            ll st = abs(curr-prev);
            if(st!=5&&st!=7){
                c=0;
            }
            prev=curr;
        }
    }
    cout<<(c?"YES":"NO")<<endl;
    
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