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
    ll count=0;
    vector<ll>pos;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            pos.push_back(i);
            count++;
        }
    }
    vector<ll>prev(count+1,INT_MAX);
    prev[0]=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            vector<ll>curr=prev;
            for(int j=1;j<=count;j++){
                curr[j]=min(curr[j],abs(pos[j-1]-i)+prev[j-1]);
            }
            prev=curr;
        }

    }
    cout<<prev[count]<<endl;
    
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}