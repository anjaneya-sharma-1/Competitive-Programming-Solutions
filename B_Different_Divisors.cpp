#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve() {
    ll n;
    cin>>n;
    int c=0;
    ll ans=1;
    for(int i=n+1;;i++){
        if(isPrime(i)){
            if(c==1){
                cout<<ans*i<<endl;
                return;
            }
            c++;
            ans*=i;
            i+=n-1;
        }
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