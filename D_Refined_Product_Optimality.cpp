#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353

ll ModInverse(ll a) {
    ll m = MOD, m0 = m, t, q;
    ll x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

class Solution{
    public:
void solve() {
    ll n,q;
    cin>>n>>q;
    vector<pair<ll,ll>> a(n);
    vector<pair<ll,ll>> b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }   
    for(ll i=0;i<n;i++){
        cin>>b[i].first;
        b[i].second=i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    unordered_map<ll,ll> ma;
    unordered_map<ll,ll> mb;
    ll prdct=1;
    for(ll i=0;i<n;i++){
        prdct=(prdct*min(a[i].first,b[i].first))%MOD;
        ma[a[i].second]=i;
        mb[b[i].second]=i;
    }
    cout<<prdct<<" ";
    while(q--){
        ll o,x;
        cin>>o>>x;
        x--;
        if(o==1){
            
            ll ind=ma[x];
            ll temp=a[ind].first;
            ll temp2=b[ind].first;
            ll ind_new=upper_bound(a.begin(),a.end(),make_pair(temp+1,a[ind].second))-a.begin();
            ll ind_old=upper_bound(a.begin(),a.end(),make_pair(temp,a[ind].second))-a.begin();
            if(ind_new!=ind_old){
                prdct=(prdct*ModInverse(min(temp,temp2)))%MOD;
                prdct=(prdct*ModInverse(min(a[ind_new-1].first,b[ind_new-1].first)))%MOD;
                a[ind].first=temp+1;
                swap(ma[x],ma[a[ind_new-1].second]);
                swap(a[ind],a[ind_new-1]);
                prdct=(prdct*min(a[ind_new-1].first,b[ind_new-1].first))%MOD;
                prdct=(prdct*min(a[ind].first,temp2))%MOD;
            }
            else {
                prdct=(prdct*ModInverse(min(temp,temp2)))%MOD;
                a[ind].first++;
                prdct=(prdct*min(a[ind].first,temp2))%MOD;
            }
            cout<<prdct<<" ";
        }
        else{
            ll ind=mb[x];
            ll temp=a[ind].first;
            ll temp2=b[ind].first;
                
            ll ind_new=upper_bound(b.begin(),b.end(),make_pair(temp2-1,b[ind].second))-b.begin();
            ll ind_old=upper_bound(b.begin(),b.end(),make_pair(temp2,b[ind].second))-b.begin();
            if(ind_new!=ind_old){
                if(ind_new==0){
                    ind_new++;
                }
                prdct=(prdct*ModInverse(min(temp,temp2)))%MOD;
                prdct=(prdct*ModInverse(min(a[ind_new-1].first,b[ind_new-1].first)))%MOD;
                
                b[ind].first=temp2-1;
                swap(mb[x],mb[b[ind_new-1].second]);
                swap(b[ind],b[ind_new-1]);
                prdct=(prdct*min(a[ind_new-1].first,b[ind_new-1].first))%MOD;
                prdct=(prdct*min(a[ind].first,b[ind].first))%MOD;
            }     
            else {
                prdct=(prdct*ModInverse(min(temp,temp2)))%MOD;
                b[ind].first=temp2-1;
                prdct=(prdct*min(a[ind].first,b[ind].first))%MOD;
            }
            cout<<prdct<<" ";
        }

        
    }
    cout<<endl;
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}