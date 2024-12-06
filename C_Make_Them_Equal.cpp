#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    string s;
    char c;
    cin>>n>>c;
    
    cin>>s;
    ll count=0;
    ll ind=-1;
    for(int i=1;i<=n;i++){
        if(s[i-1]!=c){
            count++;
        }
        else{
            ind=i;
        }
    }
    if(count==0){
        cout<<0<<endl;
    }
    else if(ind*2>n){
        cout<<1<<endl;
        cout<<ind<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
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