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
    string s,t;
    cin>>s;
    cin>>t;
    int start=0;
    if(s==t){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            cout<<-1<<endl;
            return;
        }
        else if(s[i]=='1'){
            start=i;
            break;

        }
    }
    vector<int>ops;
    for(int i=start;i<n-1;i++){
        if(s[i+1]=='0'){
            ops.push_back(i+1);
        }
    }
    for(int i=n-2;i>=start;i--){
        if(t[i+1]=='0'){
            ops.push_back(i+1);
        }
    }
    cout<<ops.size()<<endl;
    for(auto x:ops){
        cout<<x<<" ";
    }
    cout<<endl;

    
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