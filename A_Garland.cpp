#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll,ll>mp;
    for(int i = 0 ;i<n; i++){
        cin >> a[i];
        mp[a[i]]=1;
    }
    ll even=0;
    ll odd=0;
    for(int i=1;i<=n;i++){
        if(mp[i]){
            continue;
        }
        if(i%2){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd+even==n){
        cout<<(n>1)<<endl;
        return;
    }
    vector<ll>oRange;
    vector<ll>eRange;
    ll ans=0;
    ll last=-1;
    for(int i=1;i<n;i++){
        if(a[i]!=0&&a[i-1]!=0){
            if(a[i]%2!=a[i-1]%2){
                ans++;
            }
        }
    }
    map<ll,ll>mp2;
    map<ll,ll>mp3;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            
            continue;
        }
        else {
            if(last==-1||a[i-1]==0){
                
             
                    if(last==-1){
                        if(a[i]%2){
                            oRange.push_back(i);
                            mp2[i]++;
                        }
                        else{
                            eRange.push_back(i);
                            mp3[i]++;
                        }
                        last=i;
                    }
                    else{
                        if(a[i]%2!=a[last]%2){
                            ans++;
                            
                        }
                        else if(a[i]%2){
                            oRange.push_back(i-last-1);
                        }
                        else{
                            eRange.push_back(i-last-1);
                        }
                    }
                }
                if(i==n-1||a[i+1]==0){
                    
                    last=i;
                }
                
            }
        }
        if(last!=n-1){
            if(a[last]%2){
            oRange.push_back(n-last-1);
                mp2[n-last-1]++;
        }
            else{
                eRange.push_back(n-last-1);
                mp3[n-last-1]++;
            }
        }
        sort(oRange.begin(),oRange.end());
        sort(eRange.begin(),eRange.end());
        
        for(int i=0;i<oRange.size();i++){
            if(oRange[i]<=odd){
                odd-=oRange[i];
            }
            else{
                if(mp2[oRange[i]]){
                    ans++;
                    mp2[oRange[i]]--;
                }
                else{
                    ans+=2;
                }
               
            }
        }
        
        for(int i=0;i<eRange.size();i++){
            if(eRange[i]<=even){
                even-=eRange[i];
            }
            else{
                if(mp3[eRange[i]]){
                    ans++;
                    mp3[eRange[i]]--;
                }
                else{
                    ans+=2;
                }
            }
        }
        cout<<ans<<endl;
    
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}