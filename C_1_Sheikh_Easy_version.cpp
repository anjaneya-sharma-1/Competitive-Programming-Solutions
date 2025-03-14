#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll l,r;
    cin>>l>>r;
    
    ll sum=0;
    ll xorr=0;
    l--;
    r--;
    for(int i=l;i<=r;i++){
        sum+=a[i];
        xorr^=a[i];
    }
    ll f=sum-xorr;
    vector<ll>prex(n+1,0);
    prex[0]=0;
    for(int i=1;i<=n;i++){
        prex[i]=prex[i-1]^a[i-1];
    }
    vector<ll>pres(n+1,0);
    pres[0]=0;
    ll ansl=l+1;
    ll ansr=r+1;
    for(int i=1;i<=n;i++){
        pres[i]=pres[i-1]+a[i-1];
    }
    for(ll i=l;i<=r;i++){
        ll low=l;
        ll high=i;
        while(low<=high){
            ll mid=(low+high)/2;
            ll sum1=pres[i+1]-pres[mid];
            ll xorr1=prex[i+1]^prex[mid];
            if(sum1-xorr1==f){
                if(i-mid<ansr-ansl){
                    ansl=mid;
                    ansr=i;
                    
                }
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    if(ansl==l+1&&ansr==r+1){
        cout<<ansl<<" "<<ansr<<endl;
        return;
    }
    cout<<ansl+1<<" "<<ansr+1<<endl;


    
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