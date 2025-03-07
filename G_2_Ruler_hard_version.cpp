#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll l=1;
    ll r=999;
    ll ans;
    while(l<=r){
        ll mid1=(2*l+r)/3;
        ll mid2=(l+2*r)/3;
        cout<<"? "<<mid1<<" "<<mid2<<endl;
 
        ll area;
        cin>>area;
        if(area==mid1*mid2){
            l=mid2+1;
        }
        else{
            if(area==(mid2+1)*(mid1)){
                l=mid1+1;
                ans=mid2;
                r=mid2-1;
            }
            else{
                ans=mid1;
                r=mid1-1;
            }
            
        }  
    }
    cout<<"! "<<ans<<endl;  
    
    
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