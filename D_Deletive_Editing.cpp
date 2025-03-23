#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s1;
    string target;
    cin>>s1>>target;
    ll n=s1.size();
    ll m=target.size();
    vector<ll>f(26,0);
    int j=m-1;
    for(int i=n-1;i>=0&&j>=0;i--){
        if(s1[i]==target[j]){
            if(f[s1[i]-'A']>0){
                
                cout<<"NO"<<endl;
                return;
            }
            j--;
        }
        else{
            f[s1[i]-'A']++;
        }
    }
    if(j==-1){
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