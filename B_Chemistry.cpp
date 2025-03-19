#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<ll>f(26,0);
    for(int i=0;i<n;i++){
        f[s[i]-'a']++;
    }
    ll count=0;
    for(int i=0;i<26;i++){
           count+=f[i]%2;
    }
    if(k==0){
        if(count>1){
            cout<<"NO"<<endl;
            return;
        }
        else{
            if((count&&n%2)||count==0){
                cout<<"YES"<<endl;
                return;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    ll count2=n-count;
    if(n-k<=1){
        cout<<"YES"<<endl;
        return;
    }
    if((n-k)%2){
        if(count>k+1){
            cout<<"NO"<<endl;
            return;
        }
        else if((k-count)%2==0){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }
    else{
        if(count>k){
            cout<<"NO"<<endl;
            return;
        }
        else if((k-count)%2==0){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
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
        delete s; 

        }
    return 0;
}