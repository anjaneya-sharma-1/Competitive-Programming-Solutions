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
    ll count=0;
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++){
        ll curr;
        cin>>curr;
        v[i]=curr;
        if(curr==i){
            count++;
        }
    }
    if(count==n){
        cout<<n<<endl;
    }
    else if(count!=0){
        cout<<n-1<<endl;
    }
    else if(count==0){
        cout<<n-2<<endl;
    }
    
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