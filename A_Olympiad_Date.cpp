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
    int one=0;
    int two=0;
    int five=0;
    int zero=0;
    int three=0;
    int ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1) one++;
        else if(x==2) two++;
        else if(x==3) three++;
        else if(x==5) five++;
        else if (x==0)zero++;
        if(one>=1&&two>=2&&three>=1&&zero>=3&&five>=1&&ans==0){
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    
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