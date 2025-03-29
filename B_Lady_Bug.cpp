#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    string a;
    string b;
    cin>>n>>a>>b;
    ll countevena=0;
    ll countodda=0;
    ll countevenb=0;
    ll countoddb=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            if(i%2==0){
                countevena++;
            }
            else{
                countodda++;
            }
        }
        if(b[i]=='0'){
            if(i%2==0){
                countevenb++;
            }
            else{
                countoddb++;
            }
        }
    }
    ll even=n/2 + n%2;
    ll odd=n/2;
    if(countevena+countoddb>=even&&countodda+countevenb>=odd){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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