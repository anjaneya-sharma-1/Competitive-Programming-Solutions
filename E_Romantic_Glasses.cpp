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
    vector<ll> v(n+1,0);
    map<ll,ll> m ;
    m[0]=1;
    int c=0;
    for(int i =1 ;i<=n;i++){
        ll curr;
        cin>>curr;
        curr*=(i%2==1?1:-1);
        ll sum = v[i-1]+curr;
        if(m.find(sum)!=m.end()&&!c){
            cout<<"YES"<<endl;
            c=1;
        }
        v[i]=sum;
        m[sum]=1;
       
    }
    if(c==1){
        return;
    }
    cout<<"NO"<<endl;
    
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