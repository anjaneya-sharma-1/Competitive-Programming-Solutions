#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 262144
#define MOD 1000000007
class Solution{
    public:
    vector<int>mp;
    Solution(){
        mp.resize(N+1,0);
    }
void solve() {
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=n*(n+1)/2;
   
    mp[0]=1;
    int xorr=0;
    for(int i=1;i<=n;i++){
        xorr^=a[i];
        int tot=0;
     
            tot+=mp[xorr];
        
        for(int i=1;i*i<=N;i++){
            int x=i*i;
            
         
                tot+=mp[xorr^x];
            
        }
        ans-=tot;
        mp[xorr]++;
        
    }
    xorr=0;
    mp[0]=0;
    for(int i=1;i<=n;i++){
        xorr^=a[i];
        mp[xorr]=0;
    }
    cout<<ans<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    Solution* s = new Solution(); 
    
    while (t--){ 
      
        s->solve();
       
        }
    return 0;
}