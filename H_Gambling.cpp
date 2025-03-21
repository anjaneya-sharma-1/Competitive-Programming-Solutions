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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<ll,ll>last;
    map<ll,ll>left;
    map<ll,ll>val;
    ll leftind=0;
    ll rightind=0;
    ll maxi=1;
    ll num=a[0];
    for(int i=0;i<n;i++){
        if(last.find(a[i])!=last.end()){
            val[a[i]]+=(1-(i-last[a[i]]-1));
            if(val[a[i]]<=0){
                val[a[i]]=1;
                left[a[i]]=i;
            }
            else if(val[a[i]]>maxi){
                maxi=val[a[i]];
                leftind=left[a[i]];
                rightind=i;
                num=a[i];
            }
        }
        else{
            val[a[i]]=1;
            left[a[i]]=i;
            if(val[a[i]]>maxi){
                maxi=val[a[i]];
                leftind=i;
                rightind=i;
                num=a[i];}
        }
        last[a[i]]=i;
    }
    
    cout<<num<<" "<<leftind+1<<" "<<rightind+1<<endl;

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