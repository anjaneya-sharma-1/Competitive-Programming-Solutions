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
    vector<ll>a(n);
    ll zero=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            zero++;
        }
    }
    if(zero==0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
    ll zero1=-1;
    for(int i=1;i<n-1;i++){
        if(a[i]==0&&zero1==-1){
            zero1=i;
        }
    }
   
        if(a[0]==0&&a[n-1]==0){
            cout<<3<<endl;
            cout<<1<<" "<<n-2<<endl;
            cout<<2<<" "<<3<<endl;
            cout<<1<<" "<<2<<endl;
            return;
        }
        else if(a[0]==0){
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<2<<endl;
            return;
        }
        else if(a[n-1]==0){
            cout<<2<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            return;
        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<2<<endl;
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