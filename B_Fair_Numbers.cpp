#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool chck(ll n){
        ll temp=n;
        while(temp>0){
            ll d=temp%10;
            if(d!=0&&n%d!=0){
                return false;
            }
            temp/=10;
        }
        return true;
    }
void solve() {
    ll n;
    cin>>n;
    while(chck(n)==false){
        n++;
    }
    cout<<n<<endl;
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